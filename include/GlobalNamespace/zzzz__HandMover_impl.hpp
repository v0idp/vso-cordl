#pragma once
// IWYU pragma private; include "GlobalNamespace/HandMover.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "GlobalNamespace/zzzz__HandMover_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandMover.get_UseHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HandType (::GlobalNamespace::HandMover::*)()>(&::GlobalNamespace::HandMover::get_UseHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c1ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        "get_UseHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandMover.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandMover::*)()>(&::GlobalNamespace::HandMover::Update)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x16c1eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandMover._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HandMover::*)()>(&::GlobalNamespace::HandMover::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x16c2198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HandMover::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HandMover::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void GlobalNamespace::HandMover::__cordl_internal_set__leftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HandMover::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HandMover::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void GlobalNamespace::HandMover::__cordl_internal_set__rightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HandType& GlobalNamespace::HandMover::__cordl_internal_get__useHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHand;
}
constexpr ::VROSC::HandType const& GlobalNamespace::HandMover::__cordl_internal_get__useHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHand;
}
constexpr void GlobalNamespace::HandMover::__cordl_internal_set__useHand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHand = value;
}
constexpr float_t& GlobalNamespace::HandMover::__cordl_internal_get__depthScrollSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthScrollSpeed;
}
constexpr float_t const& GlobalNamespace::HandMover::__cordl_internal_get__depthScrollSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthScrollSpeed;
}
constexpr void GlobalNamespace::HandMover::__cordl_internal_set__depthScrollSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthScrollSpeed = value;
}
constexpr float_t& GlobalNamespace::HandMover::__cordl_internal_get__depthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthOffset;
}
constexpr float_t const& GlobalNamespace::HandMover::__cordl_internal_get__depthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthOffset;
}
constexpr void GlobalNamespace::HandMover::__cordl_internal_set__depthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthOffset = value;
}
inline ::VROSC::HandType GlobalNamespace::HandMover::get_UseHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        "get_UseHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::HandType, false>(this, ___internal_method);
}
inline void GlobalNamespace::HandMover::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HandMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HandMover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HandMover* GlobalNamespace::HandMover::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HandMover*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandMover::HandMover()   {
}
