#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideStartPosition.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OverrideStartPosition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverrideStartPosition.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideStartPosition::*)()>(&::GlobalNamespace::OverrideStartPosition::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16c21b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideStartPosition*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideStartPosition._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideStartPosition::*)()>(&::GlobalNamespace::OverrideStartPosition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c2228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideStartPosition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::OverrideStartPosition::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OverrideStartPosition::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void GlobalNamespace::OverrideStartPosition::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OverrideStartPosition::__cordl_internal_get__startRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OverrideStartPosition::__cordl_internal_get__startRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr void GlobalNamespace::OverrideStartPosition::__cordl_internal_set__startRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startRotation = value;
}
inline void GlobalNamespace::OverrideStartPosition::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideStartPosition*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OverrideStartPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideStartPosition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OverrideStartPosition* GlobalNamespace::OverrideStartPosition::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OverrideStartPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverrideStartPosition::OverrideStartPosition()   {
}
