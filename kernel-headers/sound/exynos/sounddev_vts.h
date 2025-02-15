#ifndef __SOUND_VTS_H
#define __SOUND_VTS_H

#if defined(__KERNEL__) || defined(__linux__)
#include <linux/types.h>
#else
#include <sys/ioctl.h>
#endif

#define VTSDRV_MISC_IOCTL_LOAD_SOUND_MODEL	_IOW('V', 0x00, struct vts_model_bin_info)
#define VTSDRV_MISC_IOCTL_READ_GOOGLE_VERSION	_IOR('V', 0x01, int)
#define VTSDRV_MISC_IOCTL_READ_EVENT_TYPE	_IOR('V', 0x02, int)
#define VTSDRV_MISC_IOCTL_WRITE_EXIT_POLLING	_IOW('V', 0x03, int)
#define VTSDRV_MISC_IOCTL_SET_PARAM		_IOW('V', 0x04, struct vts_ipc_msg)
#define VTSDRV_MISC_IOCTL_READ_GOOGLE_UUID	_IOR('V', 0x05, char[40])

#endif /* __SOUND_VTS_H */

