#pragma once
// IWYU pragma private; include "VROSC/SpatialAnchorsManager.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SpatialAnchorsManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__AnchorState_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__SpatialAnchorsManager_def.hpp"
#include "VROSC/zzzz__TransformAnchor_def.hpp"
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager_AnchorData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager_AnchorData::*)()>(&::VROSC::SpatialAnchorsManager_AnchorData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x172a0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager_AnchorData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_SpaceHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpaceHandle;
}
constexpr uint64_t const& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_SpaceHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpaceHandle;
}
constexpr void VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_set_SpaceHandle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpaceHandle = value;
}
constexpr ::System::Guid& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_SpaceUuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpaceUuid;
}
constexpr ::System::Guid const& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_SpaceUuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpaceUuid;
}
constexpr void VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_set_SpaceUuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpaceUuid = value;
}
constexpr ::UnityW<::VROSC::TransformAnchor>& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_TransformAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformAnchor;
}
constexpr ::UnityW<::VROSC::TransformAnchor> const& VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_get_TransformAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformAnchor;
}
constexpr void VROSC::SpatialAnchorsManager_AnchorData::__cordl_internal_set_TransformAnchor(::UnityW<::VROSC::TransformAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager_AnchorData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager_AnchorData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SpatialAnchorsManager_AnchorData* VROSC::SpatialAnchorsManager_AnchorData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager_AnchorData*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager_AnchorData::SpatialAnchorsManager_AnchorData()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass6_0::*)()>(&::VROSC::SpatialAnchorsManager___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1729c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SpatialAnchorsManager>& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SpatialAnchorsManager> const& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::VROSC::SpatialAnchorsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get_preparedAnchorsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preparedAnchorsCount;
}
constexpr int32_t const& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get_preparedAnchorsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preparedAnchorsCount;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_set_preparedAnchorsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preparedAnchorsCount = value;
}
constexpr ::System::Action*& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action* const& VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_0::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0* VROSC::SpatialAnchorsManager___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0::SpatialAnchorsManager___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass6_1::*)()>(&::VROSC::SpatialAnchorsManager___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1729c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1._SaveSpatialAnchors_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass6_1::*)(bool)>(&::VROSC::SpatialAnchorsManager___c__DisplayClass6_1::_SaveSpatialAnchors_b__0)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x172a2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*>::get(),
                        "<SaveSpatialAnchors>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>& VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*> const& VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_set_anchor(::System::Collections::Generic::KeyValuePair_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*& VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_0* const& VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::VROSC::SpatialAnchorsManager___c__DisplayClass6_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass6_1::_SaveSpatialAnchors_b__0(bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*>::get(),
                        "<SaveSpatialAnchors>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success);
}
inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1* VROSC::SpatialAnchorsManager___c__DisplayClass6_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1::SpatialAnchorsManager___c__DisplayClass6_1()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass6_2::*)()>(&::VROSC::SpatialAnchorsManager___c__DisplayClass6_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172a6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2._SaveSpatialAnchors_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass6_2::*)(bool)>(&::VROSC::SpatialAnchorsManager___c__DisplayClass6_2::_SaveSpatialAnchors_b__1)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x172a8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*>::get(),
                        "<SaveSpatialAnchors>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SpatialAnchorsManager_AnchorData*& VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_get_newAnchorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAnchorData;
}
constexpr ::VROSC::SpatialAnchorsManager_AnchorData* const& VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_get_newAnchorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAnchorData;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_set_newAnchorData(::VROSC::SpatialAnchorsManager_AnchorData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newAnchorData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*& VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_get_CS$__8__locals2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_1* const& VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_get_CS$__8__locals2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass6_2::__cordl_internal_set_CS$__8__locals2(::VROSC::SpatialAnchorsManager___c__DisplayClass6_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass6_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass6_2::_SaveSpatialAnchors_b__1(bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*>::get(),
                        "<SaveSpatialAnchors>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success);
}
inline ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2* VROSC::SpatialAnchorsManager___c__DisplayClass6_2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager___c__DisplayClass6_2*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass6_2::SpatialAnchorsManager___c__DisplayClass6_2()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::*)()>(&::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172a0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0._LoadFrom_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::*)(::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>)>(&::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_LoadFrom_b__0)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x172ab18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        "<LoadFrom>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0._LoadFrom_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_LoadFrom_b__1)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x172b1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        "<LoadFrom>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SpatialAnchorsManager>& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SpatialAnchorsManager> const& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_set___4__this(::UnityW<::VROSC::SpatialAnchorsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IAnchoredObject*& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_anchoredObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchoredObject;
}
constexpr ::VROSC::IAnchoredObject* const& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_anchoredObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchoredObject;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_set_anchoredObject(::VROSC::IAnchoredObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchoredObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_set_onSuccess(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::__cordl_internal_set___9__1(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_LoadFrom_b__0(::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>  anchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        "<LoadFrom>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchors);
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass7_0::_LoadFrom_b__1(bool  success, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>::get(),
                        "<LoadFrom>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, position, rotation);
}
inline ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0* VROSC::SpatialAnchorsManager___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass7_0::SpatialAnchorsManager___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass7_1::*)()>(&::VROSC::SpatialAnchorsManager___c__DisplayClass7_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1._LoadFrom_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager___c__DisplayClass7_1::*)(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool)>(&::VROSC::SpatialAnchorsManager___c__DisplayClass7_1::_LoadFrom_b__2)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x172b3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*>::get(),
                        "<LoadFrom>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AnchorState*& VROSC::SpatialAnchorsManager___c__DisplayClass7_1::__cordl_internal_get_anchorState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorState;
}
constexpr ::VROSC::AnchorState* const& VROSC::SpatialAnchorsManager___c__DisplayClass7_1::__cordl_internal_get_anchorState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorState;
}
constexpr void VROSC::SpatialAnchorsManager___c__DisplayClass7_1::__cordl_internal_set_anchorState(::VROSC::AnchorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchorState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass7_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager___c__DisplayClass7_1::_LoadFrom_b__2(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  unboundAnchor, bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*>::get(),
                        "<LoadFrom>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unboundAnchor, success);
}
inline ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1* VROSC::SpatialAnchorsManager___c__DisplayClass7_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager___c__DisplayClass7_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager___c__DisplayClass7_1::SpatialAnchorsManager___c__DisplayClass7_1()   {
}
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)()>(&::VROSC::SpatialAnchorsManager::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x172953c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)()>(&::VROSC::SpatialAnchorsManager::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1729634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.LoadingSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)(::StringW, bool)>(&::VROSC::SpatialAnchorsManager::LoadingSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x172972c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "LoadingSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.SaveSpatialAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)(::System::Action*)>(&::VROSC::SpatialAnchorsManager::SaveSpatialAnchors)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x172977c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "SaveSpatialAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.LoadFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)(::VROSC::IAnchoredObject*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SpatialAnchorsManager::LoadFrom)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x1729d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "LoadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IAnchoredObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager.DeleteAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)(::VROSC::IAnchoredObject*)>(&::VROSC::SpatialAnchorsManager::DeleteAnchors)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x172a140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "DeleteAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IAnchoredObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpatialAnchorsManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpatialAnchorsManager::*)()>(&::VROSC::SpatialAnchorsManager::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x172a26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::SpatialAnchorsManager::__cordl_internal_get__anchorLocalizationTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchorLocalizationTimeout;
}
constexpr float_t const& VROSC::SpatialAnchorsManager::__cordl_internal_get__anchorLocalizationTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchorLocalizationTimeout;
}
constexpr void VROSC::SpatialAnchorsManager::__cordl_internal_set__anchorLocalizationTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anchorLocalizationTimeout = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*& VROSC::SpatialAnchorsManager::__cordl_internal_get__anchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchors;
}
constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>* const& VROSC::SpatialAnchorsManager::__cordl_internal_get__anchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchors;
}
constexpr void VROSC::SpatialAnchorsManager::__cordl_internal_set__anchors(::System::Collections::Generic::Dictionary_2<::VROSC::IAnchoredObject*,::VROSC::SpatialAnchorsManager_AnchorData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SpatialAnchorsManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpatialAnchorsManager::LoadingSession(::StringW  sessionId, bool  isDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "LoadingSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isDefault);
}
inline void VROSC::SpatialAnchorsManager::SaveSpatialAnchors(::System::Action*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "SaveSpatialAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline void VROSC::SpatialAnchorsManager::LoadFrom(::VROSC::IAnchoredObject*  anchoredObject, ::System::Collections::Generic::List_1<::StringW>*  spatialAnchorsUuids, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "LoadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IAnchoredObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchoredObject, spatialAnchorsUuids, onSuccess, onFailure);
}
inline void VROSC::SpatialAnchorsManager::DeleteAnchors(::VROSC::IAnchoredObject*  anchoredObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        "DeleteAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IAnchoredObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchoredObject);
}
inline void VROSC::SpatialAnchorsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpatialAnchorsManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SpatialAnchorsManager* VROSC::SpatialAnchorsManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpatialAnchorsManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpatialAnchorsManager::SpatialAnchorsManager()   {
}
