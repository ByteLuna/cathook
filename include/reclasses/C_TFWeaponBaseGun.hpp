/*
 * C_TFWeaponBaseGun.hpp
 *
 *  Created on: Nov 23, 2017
 *      Author: nullifiedcat
 */

#pragma once

#include "reclasses.hpp"

namespace re
{

class C_TFWeaponBaseGun : public C_TFWeaponBase
{
public:
    inline static float GetProjectileSpeed(IClientEntity *self)
    {
        typedef float (*fn_t)(IClientEntity *);
        return vfunc<fn_t>(self, offsets::PlatformOffset(537, offsets::undefined, 537), 0)(self);
    }
    inline static float GetWeaponSpread(IClientEntity *self)
    {
        typedef float (*fn_t)(IClientEntity *);
        return vfunc<fn_t>(self, offsets::PlatformOffset(535, offsets::undefined, 535), 0)(self);
    }
    inline static float GetProjectileGravity(IClientEntity *self)
    {
        typedef float (*fn_t)(IClientEntity *);
        return vfunc<fn_t>(self, offsets::PlatformOffset(538, offsets::undefined, 538), 0)(self);
    }
    inline static int LaunchGrenade(IClientEntity *self)
    {
        typedef int (*fn_t)(IClientEntity *);
        return vfunc<fn_t>(self, offsets::PlatformOffset(551, offsets::undefined, 551), 0)(self);
    }
};
} // namespace re
