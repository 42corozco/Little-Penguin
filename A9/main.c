#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <asm/uaccess.h>

#include <linux/string.h>
#include <linux/mount.h>
#include <linux/fs_struct.h>
#include <linux/dcache.h>
#include <linux/seq_file.h>

#define procfs_name "mymounts"
static struct proc_dir_entry *proc_file;

/*
static ssize_t mywrite(struct file *file, const char __user *ubuf,size_t count, loff_t *ppos)
{
	//printk( KERN_DEBUG "write handler\n");
	return -1;
}
*/

ssize_t read_proc(struct file *filp, char *buf, size_t len, loff_t *offp )
{
    struct dentry *curdentry;

    list_for_each_entry(curdentry, &current->fs->root.mnt->mnt_root->d_subdirs, d_child)
    {
        //if ( curdentry->d_flags & DCACHE_MOUNTED)
            printk("%s is mounted", curdentry->d_name.name);
    }
    return 0;
}

static struct file_operations myops =
{
	.owner = THIS_MODULE,
	.read = read_proc,
	//.write = mywrite,
};

static int __init proc_init(void)
{
	proc_file = proc_create(procfs_name, 0644, NULL,(const struct proc_ops *)&myops);
	if (proc_file == NULL) {
		pr_info("Error: could not initialize /proc/%s\n", procfs_name);
		return -ENOMEM;
	}
	return 0;
}

static void __exit proc_exit(void)
{
	//remove_proc_entry(procfs_name, proc_file);
	proc_remove(proc_file);
	pr_info("Cleaning up module\n");
}

module_init(proc_init);
module_exit(proc_exit);

MODULE_AUTHOR("corozco");
MODULE_DESCRIPTION("A8");
MODULE_LICENSE("GPL");
