#ifndef _HWC_UTIL_
#define _HWC_UTIL_

#define CPU_CLUST0_GOV_PATH "/sys/devices/system/cpu/cpufreq/policy0/scaling_governor"
#define CPU_CLUST1_GOV_PATH "/sys/devices/system/cpu/cpufreq/policy4/scaling_governor"

//or /sys/devices/system/cpu/cpufreq/policy0/scaling_min_freq
#define CPU0_SCALING_MIN_FREQ "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq"
//or /sys/devices/system/cpu/cpufreq/policy4/scaling_min_freq
#define CPU4_SCALING_MIN_FREQ "/sys/devices/system/cpu/cpu4/cpufreq/scaling_min_freq"

#define hwcMIN(x, y)			(((x) <= (y)) ?  (x) :  (y))
#define hwcMAX(x, y)			(((x) >= (y)) ?  (x) :  (y))
#define IS_ALIGN(val,align)    (((val)&(align-1))==0)
#ifndef ALIGN
#define ALIGN( value, base ) (((value) + ((base) - 1)) & ~((base) - 1))
#endif
#define ALIGN_DOWN( value, base)	(value & (~(base-1)) )

int hwc_get_int_property(const char* pcProperty,const char* default_value);
int hwc_get_string_property(const char* pcProperty,const char* default_value,char* retult);
int DetectValidData(int *data,int w,int h);
void ctl_cpu_performance(int on, int type);
void ctl_little_cpu(int on);
int set_cpu_min_freq(int freq);

#endif // _HWC_UTIL_
