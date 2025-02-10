#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModulePhysics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DG/Tweening/zzzz__DOTweenModulePhysics_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenerCore_3_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__Path_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__PathOptions_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__QuaternionOptions_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__VectorOptions_def.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
#include "DG/Tweening/zzzz__DOTweenModulePhysics_def.hpp"
#include "DG/Tweening/zzzz__PathMode_def.hpp"
#include "DG/Tweening/zzzz__PathType_def.hpp"
#include "DG/Tweening/zzzz__RotateMode_def.hpp"
#include "DG/Tweening/zzzz__Sequence_def.hpp"
#include "DG/Tweening/zzzz__Tween_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0._DOMove_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::_DOMove_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*>::get(),
                        "<DOMove>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::_DOMove_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*>::get(),
                        "<DOMove>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0::DOTweenModulePhysics___c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ae5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0._DOLocalPath_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_DOLocalPath_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        "<DOLocalPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0._DOLocalPath_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::*)(::UnityEngine::Vector3)>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_DOLocalPath_b__1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x16ae620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        "<DOLocalPath>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_get_trans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_get_trans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trans)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_DOLocalPath_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        "<DOLocalPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::_DOLocalPath_b__1(::UnityEngine::Vector3  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>::get(),
                        "<DOLocalPath>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0::DOTweenModulePhysics___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0._DOMoveX_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::_DOMoveX_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*>::get(),
                        "<DOMoveX>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::_DOMoveX_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*>::get(),
                        "<DOMoveX>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0::DOTweenModulePhysics___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0._DOMoveY_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::_DOMoveY_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*>::get(),
                        "<DOMoveY>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::_DOMoveY_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*>::get(),
                        "<DOMoveY>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0::DOTweenModulePhysics___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0._DOMoveZ_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::_DOMoveZ_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*>::get(),
                        "<DOMoveZ>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::_DOMoveZ_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*>::get(),
                        "<DOMoveZ>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0::DOTweenModulePhysics___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0._DORotate_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::_DORotate_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*>::get(),
                        "<DORotate>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::_DORotate_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*>::get(),
                        "<DORotate>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0::DOTweenModulePhysics___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ad918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0._DOLookAt_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::_DOLookAt_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*>::get(),
                        "<DOLookAt>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::_DOLookAt_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*>::get(),
                        "<DOLookAt>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0::DOTweenModulePhysics___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16addbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._DOJump_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._DOJump_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16ae7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._DOJump_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._DOJump_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0._DOJump_b__4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__4)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16ae814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_startPosY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosY;
}
constexpr float_t const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_startPosY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosY;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_startPosY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPosY = value;
}
constexpr bool& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_offsetYSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetYSet;
}
constexpr bool const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_offsetYSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetYSet;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_offsetYSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetYSet = value;
}
constexpr float_t& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_offsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr float_t const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_offsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_offsetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetY = value;
}
constexpr ::DG::Tweening::Sequence*& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr ::DG::Tweening::Sequence* const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_s(::DG::Tweening::Sequence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_endValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endValue;
}
constexpr ::UnityEngine::Vector3 const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_endValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endValue;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_endValue(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endValue = value;
}
constexpr ::DG::Tweening::Tween*& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_yTween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yTween;
}
constexpr ::DG::Tweening::Tween* const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_get_yTween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yTween;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::__cordl_internal_set_yTween(::DG::Tweening::Tween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::_DOJump_b__4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>::get(),
                        "<DOJump>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0::DOTweenModulePhysics___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16adffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0._DOPath_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::_DOPath_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*>::get(),
                        "<DOPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::_DOPath_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*>::get(),
                        "<DOPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0::DOTweenModulePhysics___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ae254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0._DOLocalPath_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_DOLocalPath_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        "<DOLocalPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0._DOLocalPath_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::*)(::UnityEngine::Vector3)>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_DOLocalPath_b__1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x16ae900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        "<DOLocalPath>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_get_trans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_get_trans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trans)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_DOLocalPath_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        "<DOLocalPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::_DOLocalPath_b__1(::UnityEngine::Vector3  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>::get(),
                        "<DOLocalPath>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0::DOTweenModulePhysics___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16ae410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0._DOPath_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::*)()>(&::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::_DOPath_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16ae9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*>::get(),
                        "<DOPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::__cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::_DOPath_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*>::get(),
                        "<DOPath>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0* DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0::DOTweenModulePhysics___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOMove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float_t, bool)>(&::DG::Tweening::DOTweenModulePhysics::DOMove)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x16acea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOMoveX
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float_t, float_t, bool)>(&::DG::Tweening::DOTweenModulePhysics::DOMoveX)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16ad050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveX",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOMoveY
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float_t, float_t, bool)>(&::DG::Tweening::DOTweenModulePhysics::DOMoveY)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16ad1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOMoveZ
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float_t, float_t, bool)>(&::DG::Tweening::DOTweenModulePhysics::DOMoveZ)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16ad388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DORotate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float_t, ::DG::Tweening::RotateMode)>(&::DG::Tweening::DOTweenModulePhysics::DORotate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x16ad524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DORotate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::RotateMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOLookAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float_t, ::DG::Tweening::AxisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::DG::Tweening::DOTweenModulePhysics::DOLookAt)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x16ad6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLookAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::AxisConstraint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOJump
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float_t, int32_t, float_t, bool)>(&::DG::Tweening::DOTweenModulePhysics::DOJump)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x16ad920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOJump",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, float_t, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, int32_t, ::System::Nullable_1<::UnityEngine::Color>)>(&::DG::Tweening::DOTweenModulePhysics::DOPath)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x16addc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOLocalPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, float_t, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, int32_t, ::System::Nullable_1<::UnityEngine::Color>)>(&::DG::Tweening::DOTweenModulePhysics::DOLocalPath)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x16ae004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLocalPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float_t, ::DG::Tweening::PathMode)>(&::DG::Tweening::DOTweenModulePhysics::DOPath)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x16ae25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::DOTweenModulePhysics.DOLocalPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float_t, ::DG::Tweening::PathMode)>(&::DG::Tweening::DOTweenModulePhysics::DOLocalPath)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x16ae418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLocalPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DG::Tweening::DOTweenModulePhysics::DOMove(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  duration, bool  snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*, false>(nullptr, ___internal_method, target, endValue, duration, snapping);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DG::Tweening::DOTweenModulePhysics::DOMoveX(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveX",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*, false>(nullptr, ___internal_method, target, endValue, duration, snapping);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DG::Tweening::DOTweenModulePhysics::DOMoveY(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*, false>(nullptr, ___internal_method, target, endValue, duration, snapping);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DG::Tweening::DOTweenModulePhysics::DOMoveZ(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOMoveZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*, false>(nullptr, ___internal_method, target, endValue, duration, snapping);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* DG::Tweening::DOTweenModulePhysics::DORotate(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  duration, ::DG::Tweening::RotateMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DORotate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::RotateMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*, false>(nullptr, ___internal_method, target, endValue, duration, mode);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* DG::Tweening::DOTweenModulePhysics::DOLookAt(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  towards, float_t  duration, ::DG::Tweening::AxisConstraint  axisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>  up)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLookAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::AxisConstraint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*, false>(nullptr, ___internal_method, target, towards, duration, axisConstraint, up);
}
inline ::DG::Tweening::Sequence* DG::Tweening::DOTweenModulePhysics::DOJump(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  jumpPower, int32_t  numJumps, float_t  duration, bool  snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOJump",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, target, endValue, jumpPower, numJumps, duration, snapping);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DG::Tweening::DOTweenModulePhysics::DOPath(::UnityEngine::Rigidbody*  target, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  path, float_t  duration, ::DG::Tweening::PathType  pathType, ::DG::Tweening::PathMode  pathMode, int32_t  resolution, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*, false>(nullptr, ___internal_method, target, path, duration, pathType, pathMode, resolution, gizmoColor);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DG::Tweening::DOTweenModulePhysics::DOLocalPath(::UnityEngine::Rigidbody*  target, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  path, float_t  duration, ::DG::Tweening::PathType  pathType, ::DG::Tweening::PathMode  pathMode, int32_t  resolution, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLocalPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*, false>(nullptr, ___internal_method, target, path, duration, pathType, pathMode, resolution, gizmoColor);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DG::Tweening::DOTweenModulePhysics::DOPath(::UnityEngine::Rigidbody*  target, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  duration, ::DG::Tweening::PathMode  pathMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*, false>(nullptr, ___internal_method, target, path, duration, pathMode);
}
inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DG::Tweening::DOTweenModulePhysics::DOLocalPath(::UnityEngine::Rigidbody*  target, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  duration, ::DG::Tweening::PathMode  pathMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::DOTweenModulePhysics*>::get(),
                        "DOLocalPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*, false>(nullptr, ___internal_method, target, path, duration, pathMode);
}
// Ctor Parameters []
constexpr ::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics()   {
}
