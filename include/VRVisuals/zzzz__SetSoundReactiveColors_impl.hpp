#pragma once
// IWYU pragma private; include "VRVisuals/SetSoundReactiveColors.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "VRVisuals/zzzz__SetSoundReactiveColors_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::VRVisuals::SetSoundReactiveColors.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRVisuals::SetSoundReactiveColors::*)()>(&::VRVisuals::SetSoundReactiveColors::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x17c43b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRVisuals::SetSoundReactiveColors.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRVisuals::SetSoundReactiveColors::*)()>(&::VRVisuals::SetSoundReactiveColors::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17c4450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRVisuals::SetSoundReactiveColors.SetColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRVisuals::SetSoundReactiveColors::*)()>(&::VRVisuals::SetSoundReactiveColors::SetColors)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x17c4454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "SetColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRVisuals::SetSoundReactiveColors._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRVisuals::SetSoundReactiveColors::*)()>(&::VRVisuals::SetSoundReactiveColors::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c45b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__baseColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseColor;
}
constexpr ::UnityEngine::Color const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__baseColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseColor;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__baseColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseColor = value;
}
constexpr ::UnityEngine::Color& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__midColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midColor;
}
constexpr ::UnityEngine::Color const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__midColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midColor;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__midColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____midColor = value;
}
constexpr ::UnityEngine::Color& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__topColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topColor;
}
constexpr ::UnityEngine::Color const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__topColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topColor;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__topColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topColor = value;
}
constexpr float_t& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr float_t const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__rotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotation = value;
}
constexpr float_t& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr float_t& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__bobbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobbing;
}
constexpr float_t const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__bobbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobbing;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__bobbing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bobbing = value;
}
constexpr float_t& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__bobbingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobbingSpeed;
}
constexpr float_t const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__bobbingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bobbingSpeed;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__bobbingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bobbingSpeed = value;
}
constexpr ::UnityEngine::Vector4& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__jumpOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpOnSound;
}
constexpr ::UnityEngine::Vector4 const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__jumpOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jumpOnSound;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__jumpOnSound(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jumpOnSound = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__materialBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& VRVisuals::SetSoundReactiveColors::__cordl_internal_get__materialBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialBlock;
}
constexpr void VRVisuals::SetSoundReactiveColors::__cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VRVisuals::SetSoundReactiveColors::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VRVisuals::SetSoundReactiveColors::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VRVisuals::SetSoundReactiveColors::SetColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        "SetColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VRVisuals::SetSoundReactiveColors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRVisuals::SetSoundReactiveColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VRVisuals::SetSoundReactiveColors* VRVisuals::SetSoundReactiveColors::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRVisuals::SetSoundReactiveColors*>());
}
// Ctor Parameters []
constexpr ::VRVisuals::SetSoundReactiveColors::SetSoundReactiveColors()   {
}
