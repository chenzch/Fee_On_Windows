#ifndef STANDARDTYPES_H
#define STANDARDTYPES_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define PLATFORM_AR_RELEASE_MAJOR_VERSION       4
#define PLATFORM_AR_RELEASE_MINOR_VERSION       7

#define CPU_TYPE_32 32
#define CPU_TYPE_64 64
#define CPU_TYPE (CPU_TYPE_32)

#define TRUE true
#define FALSE false

typedef bool boolean;
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t sint8;
typedef int16_t sint16;
typedef int32_t sint32;
typedef int64_t sint64;
typedef uint_least8_t uint8_least;
typedef uint_least16_t uint16_least;
typedef uint_least32_t uint32_least;
typedef int_least8_t sint8_least;
typedef int_least16_t sint16_least;
typedef int_least32_t sint32_least;
typedef float float32;
typedef double float64;

#define NULL_PTR ((void *)0)

#define STD_AR_RELEASE_MAJOR_VERSION      4
#define STD_AR_RELEASE_MINOR_VERSION      7

#define STD_ON      0x01U
#define STD_OFF     0x00U
#define E_OK        0x00U
#define E_NOT_OK    0x01U

typedef uint8 Std_ReturnType;
typedef struct
{
    uint16  vendorID;               /**< @brief vendor ID */
    uint16  moduleID;               /**< @brief BSW module ID */
    uint8   sw_major_version;       /**< @brief BSW module software major version */
    uint8   sw_minor_version;       /**< @brief BSW module software minor version */
    uint8   sw_patch_version;       /**< @brief BSW module software patch version */
} Std_VersionInfoType;

#endif /* #ifndef STANDARDTYPES_H */
