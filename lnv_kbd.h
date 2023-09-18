#pragma once

#include "quantum.h"

#define XXX KC_NO

// default keymap:
#define LAYOUT_all( \
    k61, k12, k13, k33, k63, k69, k66, k37, k17, k19, k29, k2B, k2C, k1B, k2A, k2D, k1D, \
    k11,      k21, k22, k23, k24, k14, k15, k25, k26, k27, k28, k18, k16, k49,      k39, \
    k31,           k41, k42, k43, k44, k34, k35, k45, k46, k47, k48, k38, k36,      k79, \
    k32,           k51, k52, k53, k54, k64, k65, k55, k56, k57, k58, k68, k78, \
    k3F,           k71, k72, k73, k74, k84, k85, k75, k76, k77, k88, k86,           k7F, \
    k5A, k1E, k3C, k6G, k81, k89,      k67, k87, k8G, k5D, k7E, k7D, k6A, k8D, \
                                                           k8A, k8B, k8C \
) \
{ \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19, XXX, k1B, XXX, k1D, k1E, XXX, XXX }, \
    { k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, XXX, XXX, XXX }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39, XXX, XXX, k3C, XXX, XXX, k3F, XXX }, \
    { k41, k42, k43, k44, k45, k46, k47, k48, k49, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, XXX, k5A, XXX, XXX, k5D, XXX, XXX, XXX }, \
    { k61, XXX, k63, k64, k65, k66, k67, k68, k69, k6A, XXX, XXX, XXX, XXX, XXX, k6G }, \
    { k71, k72, k73, k74, k75, k76, k77, k78, k79, XXX, XXX, XXX, k7D, k7E, k7F, XXX }, \
    { k81, XXX, XXX, k84, k85, k86, k87, k88, k89, k8A, k8B, k8C, k8D, XXX, XXX, k8G } \
}
