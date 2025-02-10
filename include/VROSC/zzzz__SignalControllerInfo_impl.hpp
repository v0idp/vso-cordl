#pragma once
// IWYU pragma private; include "VROSC/SignalControllerInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SignalControllerInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::SignalControllerInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalControllerInfo::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::VROSC::SignalControllerInfo::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1721378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalControllerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::SignalControllerInfo::__cordl_internal_get_Origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origin;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::SignalControllerInfo::__cordl_internal_get_Origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origin;
}
constexpr void VROSC::SignalControllerInfo::__cordl_internal_set_Origin(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Origin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::SignalControllerInfo::__cordl_internal_get_NormalizedPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizedPoint;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SignalControllerInfo::__cordl_internal_get_NormalizedPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizedPoint;
}
constexpr void VROSC::SignalControllerInfo::__cordl_internal_set_NormalizedPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalizedPoint = value;
}
constexpr ::UnityEngine::Vector3& VROSC::SignalControllerInfo::__cordl_internal_get_NormalizedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizedRotation;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SignalControllerInfo::__cordl_internal_get_NormalizedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalizedRotation;
}
constexpr void VROSC::SignalControllerInfo::__cordl_internal_set_NormalizedRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalizedRotation = value;
}
constexpr ::UnityEngine::Vector3& VROSC::SignalControllerInfo::__cordl_internal_get_RelativeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RelativeVelocity;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SignalControllerInfo::__cordl_internal_get_RelativeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RelativeVelocity;
}
constexpr void VROSC::SignalControllerInfo::__cordl_internal_set_RelativeVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RelativeVelocity = value;
}
inline void VROSC::SignalControllerInfo::_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  normalizedPoint, ::UnityEngine::Vector3  normalizedRotation, ::UnityEngine::Vector3  relativeVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalControllerInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, normalizedPoint, normalizedRotation, relativeVelocity);
}
inline ::VROSC::SignalControllerInfo* VROSC::SignalControllerInfo::New_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  normalizedPoint, ::UnityEngine::Vector3  normalizedRotation, ::UnityEngine::Vector3  relativeVelocity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SignalControllerInfo*>(device, normalizedPoint, normalizedRotation, relativeVelocity));
}
// Ctor Parameters []
constexpr ::VROSC::SignalControllerInfo::SignalControllerInfo()   {
}
