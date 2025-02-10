#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax.AndPairRemainingDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax::*)()>(&::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax::AndPairRemainingDevices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e4fe08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax>::get(),
                        "AndPairRemainingDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax::AndPairRemainingDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax>::get(),
                        "AndPairRemainingDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax::InputUser_ControlSchemeChangeSyntax(int32_t  m_UserIndex) noexcept  {
this->m_UserIndex = m_UserIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax::InputUser_ControlSchemeChangeSyntax()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserFlags::InputUser_UserFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserFlags::InputUser_UserFlags()   {
}
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserFlags  UnityEngine::InputSystem::Users::InputUser_UserFlags::BindToAllDevices{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserFlags  UnityEngine::InputSystem::Users::InputUser_UserFlags::UserAccountSelectionInProgress{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actions", ty: "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlScheme", ty: "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemeMatch", ty: "::UnityEngine::InputSystem::InputControlScheme_MatchResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::Users::InputUser_UserFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserData::InputUser_UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle, ::StringW  platformUserAccountName, ::StringW  platformUserAccountId, int32_t  deviceCount, int32_t  deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection*  actions, ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::UnityEngine::InputSystem::InputControlScheme_MatchResult  controlSchemeMatch, int32_t  lostDeviceCount, int32_t  lostDeviceStartIndex, ::UnityEngine::InputSystem::Users::InputUser_UserFlags  flags) noexcept  {
this->platformUserAccountHandle = platformUserAccountHandle;
this->platformUserAccountName = platformUserAccountName;
this->platformUserAccountId = platformUserAccountId;
this->deviceCount = deviceCount;
this->deviceStartIndex = deviceStartIndex;
this->actions = actions;
this->controlScheme = controlScheme;
this->controlSchemeMatch = controlSchemeMatch;
this->lostDeviceCount = lostDeviceCount;
this->lostDeviceStartIndex = lostDeviceStartIndex;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_UserData::InputUser_UserData()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::Compare)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2e4fe70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount.GetUserAccountHandleForDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::GetUserAccountHandleForDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e4feac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount>::get(),
                        "GetUserAccountHandleForDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::Compare(::UnityEngine::InputSystem::InputDevice*  x, ::UnityEngine::InputSystem::InputDevice*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount>::get(),
                        "GetUserAccountHandleForDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(nullptr, ___internal_method, device);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr  UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>* UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::i___System__Collections__Generic__IComparer_1___UnityEngine__InputSystem__InputDevice__()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::InputUser_CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle) noexcept  {
this->platformUserAccountHandle = platformUserAccountHandle;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_CompareDevicesByUserAccount::InputUser_CompareDevicesByUserAccount()   {
}
// Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection::InputUser_OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice*  device, uint32_t  userId) noexcept  {
this->device = device;
this->userId = userId;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection::InputUser_OngoingAccountSelection()   {
}
// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUsers", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUserData", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser_UserData,::Array<::UnityEngine::InputSystem::Users::InputUser_UserData>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser_GlobalState::InputUser_GlobalState(int32_t  pairingStateVersion, uint32_t  lastUserId, int32_t  allUserCount, int32_t  allPairedDeviceCount, int32_t  allLostDeviceCount, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>  allUsers, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser_UserData,::Array<::UnityEngine::InputSystem::Users::InputUser_UserData>*>  allUserData, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  allPairedDevices, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  allLostDevices, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::InputUser_OngoingAccountSelection>  ongoingAccountSelections, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  onChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  onUnpairedDeviceUsed, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  onPreFilterUnpairedDeviceUsed, ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  actionChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  onDeviceChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate, bool  onActionChangeHooked, bool  onDeviceChangeHooked, bool  onEventHooked, int32_t  listenForUnpairedDeviceActivity) noexcept  {
this->pairingStateVersion = pairingStateVersion;
this->lastUserId = lastUserId;
this->allUserCount = allUserCount;
this->allPairedDeviceCount = allPairedDeviceCount;
this->allLostDeviceCount = allLostDeviceCount;
this->allUsers = allUsers;
this->allUserData = allUserData;
this->allPairedDevices = allPairedDevices;
this->allLostDevices = allLostDevices;
this->ongoingAccountSelections = ongoingAccountSelections;
this->onChange = onChange;
this->onUnpairedDeviceUsed = onUnpairedDeviceUsed;
this->onPreFilterUnpairedDeviceUsed = onPreFilterUnpairedDeviceUsed;
this->actionChangeDelegate = actionChangeDelegate;
this->onDeviceChangeDelegate = onDeviceChangeDelegate;
this->onEventDelegate = onEventDelegate;
this->onActionChangeHooked = onActionChangeHooked;
this->onDeviceChangeHooked = onDeviceChangeHooked;
this->onEventHooked = onEventHooked;
this->listenForUnpairedDeviceActivity = listenForUnpairedDeviceActivity;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser_GlobalState::InputUser_GlobalState()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)()>(&::UnityEngine::InputSystem::Users::InputUser___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4ff40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._SaveAndResetState_b__88_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)(::ByRef<::UnityEngine::InputSystem::Users::InputUser_GlobalState>)>(&::UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e4ff48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        "<SaveAndResetState>b__88_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Users::InputUser_GlobalState>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._SaveAndResetState_b__88_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)()>(&::UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e4ffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        "<SaveAndResetState>b__88_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9(::UnityEngine::InputSystem::Users::InputUser___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Users::InputUser___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>(std::forward<::UnityEngine::InputSystem::Users::InputUser___c*>(value));
}
inline ::UnityEngine::InputSystem::Users::InputUser___c* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Users::InputUser___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9__88_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>*, "<>9__88_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>(std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9__88_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>*, "<>9__88_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9__88_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__88_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9__88_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__88_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_0(::ByRef<::UnityEngine::InputSystem::Users::InputUser_GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        "<SaveAndResetState>b__88_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Users::InputUser_GlobalState>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser___c*>::get(),
                        "<SaveAndResetState>b__88_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Users::InputUser___c* UnityEngine::InputSystem::Users::InputUser___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Users::InputUser___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser___c::InputUser___c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_valid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_valid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2e3cda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_valid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_index
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_index)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2e4a9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_index",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4abc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e4abd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e4ac70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e4acf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_pairedDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_pairedDevices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e3db58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_pairedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_lostDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_lostDevices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e4ad80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_lostDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_actions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputActionCollection* (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_actions)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e4ae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_actions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlScheme)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e3ce74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_controlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlSchemeMatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlScheme_MatchResult (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e4aec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_controlSchemeMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_hasMissingRequiredDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e3dcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_hasMissingRequiredDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_all
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_all)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e4af60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_all",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e413c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e4202c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onUnpairedDeviceUsed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e41794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onUnpairedDeviceUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onUnpairedDeviceUsed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e41ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onUnpairedDeviceUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onPrefilterUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e41888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onPrefilterUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onPrefilterUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e41be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onPrefilterUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_listenForUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e4194c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_listenForUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.set_listenForUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2e419a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "set_listenForUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::ToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2e4b20c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AssociateActionsWithUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::IInputActionCollection*)>(&::UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2e4045c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AssociateActionsWithUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2e40c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindControlScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ::ByRef<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2e4ba10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindControlScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ::ByRef<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::FindControlScheme)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2e3e824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2e40a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlSchemeInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(int32_t, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2e4b5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlSchemeInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevice)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e42f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevices)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2e3faf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveLostDevicesForUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2e4c904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveLostDevicesForUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevicesAndRemoveUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e40928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevicesAndRemoveUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e402b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "GetUnpairedInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2e4d3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "GetUnpairedInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserPairedToDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2e4d5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindUserPairedToDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserByAccount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserByAccount)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2e4d844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindUserByAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.CreateUserWithoutPairedDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)()>(&::UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e40990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "CreateUserWithoutPairedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.PerformPairingWithDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2e3fde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "PerformPairingWithDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2e4db9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "InitiateUserAccountSelection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e4e870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::System::Object*)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e4e880;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4e928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Equality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e426a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Inequality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e4db90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::AddUser)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2e4da98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AddUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveUser)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x2e4d00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Notify
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::Notify)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2e4bcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "Notify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e4ab10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2e4d9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e4d6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddDeviceToUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool, bool)>(&::UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2e4dce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AddDeviceToUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveDeviceFromUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2e4cabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveDeviceFromUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdateControlSchemeMatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x2e4c000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UpdateControlSchemeMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdatePlatformUserAccount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2e4e240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UpdatePlatformUserAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.QueryPairedPlatformUserAccount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::UnityEngine::InputSystem::InputDevice*, ::ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>, ::ByRef<::StringW>, ::ByRef<::StringW>)>(&::UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2e4eacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "QueryPairedPlatformUserAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelectionAtPlatformLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e4e684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "InitiateUserAccountSelectionAtPlatformLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnActionChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnActionChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e4ec50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnDeviceChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnDeviceChange)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x2e4ed3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindLostDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::FindLostDevice)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e4f398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindLostDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::OnEvent)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x2e4f470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.SaveAndResetState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::Users::InputUser::SaveAndResetState)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2e4fa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "SaveAndResetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoActionChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e4b4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromActionChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e4e9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoDeviceChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2e4e740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e4e930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoEvents)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2e4aff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceStateChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2e4b13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromDeviceStateChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.DisposeAndResetGlobalState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2e4fc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "DisposeAndResetGlobalState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ResetGlobals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::ResetGlobals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e4fcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ResetGlobals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_k_InputUserOnChangeMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUserOnChangeMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Users::InputUser::getStaticF_k_InputUserOnChangeMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUserOnChangeMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>();
}
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_k_InputCheckForUnpairMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputCheckForUnpairMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Users::InputUser::getStaticF_k_InputCheckForUnpairMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputCheckForUnpairMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>();
}
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_s_GlobalState(::UnityEngine::InputSystem::Users::InputUser_GlobalState  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Users::InputUser_GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>(std::forward<::UnityEngine::InputSystem::Users::InputUser_GlobalState>(value));
}
inline ::UnityEngine::InputSystem::Users::InputUser_GlobalState UnityEngine::InputSystem::Users::InputUser::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Users::InputUser_GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get>();
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_valid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_index",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::Users::InputUser::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_platformUserAccountId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_pairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_pairedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_lostDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_lostDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::Users::InputUser::get_actions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_actions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputActionCollection*, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::Users::InputUser::get_controlScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_controlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme_MatchResult UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_controlSchemeMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme_MatchResult, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_hasMissingRequiredDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::get_all()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_all",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onUnpairedDeviceUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onUnpairedDeviceUsed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "add_onPrefilterUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "remove_onPrefilterUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "get_listenForUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "set_listenForUnpairedDeviceActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection*  actions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AssociateActionsWithUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::IInputActionCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actions);
}
inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::StringW  schemeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, false>(this, ___internal_method, schemeName);
}
inline bool UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme(::StringW  schemeName, ::ByRef<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, schemeName, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::FindControlScheme(::StringW  schemeName, ::ByRef<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlScheme>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemeName, scheme);
}
inline ::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlScheme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser_ControlSchemeChangeSyntax, false>(this, ___internal_method, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal(int32_t  userIndex, ::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ActivateControlSchemeInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlScheme>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userIndex, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveLostDevicesForUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnpairDevicesAndRemoveUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "GetUnpairedInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices(::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "GetUnpairedInputDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindUserPairedToDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindUserByAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, platformUserAccountHandle);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "CreateUserWithoutPairedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUser  user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "PerformPairingWithDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method, device, user, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "InitiateUserAccountSelection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userIndex, device, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::UnityEngine::InputSystem::Users::InputUser  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Equality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Inequality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUser>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::AddUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AddUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::Notify(int32_t  userIndex, ::UnityEngine::InputSystem::Users::InputUserChange  change, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "Notify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, change, device);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(uint32_t  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, userId);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, platformHandle);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "TryFindUserIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice, bool  dontUpdateControlScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "AddDeviceToUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice, dontUpdateControlScheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "RemoveDeviceFromUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice);
}
inline void UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch(int32_t  userIndex, bool  autoPairMissing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UpdateControlSchemeMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, autoPairMissing);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UpdatePlatformUserAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, userIndex, device);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice*  device, ::ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>  platformAccountHandle, ::ByRef<::StringW>  platformAccountName, ::ByRef<::StringW>  platformAccountId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "QueryPairedPlatformUserAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, device, platformAccountHandle, platformAccountName, platformAccountId);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "InitiateUserAccountSelectionAtPlatformLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnActionChange(::System::Object*  obj, ::UnityEngine::InputSystem::InputActionChange  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, change);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, change);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::FindLostDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "FindLostDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device, startIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "OnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventPtr, device);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::Users::InputUser::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "SaveAndResetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromActionChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromDeviceChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "HookIntoEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "UnhookFromDeviceStateChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "DisposeAndResetGlobalState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Users::InputUser>::get(),
                        "ResetGlobals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr  UnityEngine::InputSystem::Users::InputUser::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>* UnityEngine::InputSystem::Users::InputUser::i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUser_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUser::InputUser(uint32_t  m_Id) noexcept  {
this->m_Id = m_Id;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser::InputUser()   {
}
