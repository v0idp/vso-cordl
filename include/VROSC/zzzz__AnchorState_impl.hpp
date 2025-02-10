#pragma once
// IWYU pragma private; include "VROSC/AnchorState.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__AnchorState_def.hpp"
#include "VROSC/zzzz__AnchorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AnchorState_State::AnchorState_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AnchorState_State::AnchorState_State()   {
}
constexpr ::VROSC::AnchorState_State  VROSC::AnchorState_State::Pending{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AnchorState_State  VROSC::AnchorState_State::Localized{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AnchorState_State  VROSC::AnchorState_State::FailedToLocalize{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::AnchorState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnchorState::*)()>(&::VROSC::AnchorState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1729534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnchorState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor& VROSC::AnchorState::__cordl_internal_get_UnboundAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnboundAnchor;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor const& VROSC::AnchorState::__cordl_internal_get_UnboundAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnboundAnchor;
}
constexpr void VROSC::AnchorState::__cordl_internal_set_UnboundAnchor(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnboundAnchor = value;
}
constexpr ::VROSC::AnchorState_State& VROSC::AnchorState::__cordl_internal_get_LocalizedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalizedState;
}
constexpr ::VROSC::AnchorState_State const& VROSC::AnchorState::__cordl_internal_get_LocalizedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalizedState;
}
constexpr void VROSC::AnchorState::__cordl_internal_set_LocalizedState(::VROSC::AnchorState_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalizedState = value;
}
inline void VROSC::AnchorState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnchorState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AnchorState* VROSC::AnchorState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnchorState*>());
}
// Ctor Parameters []
constexpr ::VROSC::AnchorState::AnchorState()   {
}
