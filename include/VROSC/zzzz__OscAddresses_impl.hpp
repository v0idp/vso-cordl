#pragma once
// IWYU pragma private; include "VROSC/OscAddresses.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__OscAddresses_def.hpp"
#include "VROSC/zzzz__OscAddresses_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::OscAddresses_ActionType::OscAddresses_ActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::OscAddresses_ActionType::OscAddresses_ActionType()   {
}
constexpr ::VROSC::OscAddresses_ActionType  VROSC::OscAddresses_ActionType::NoteOn{static_cast<int32_t>(0x0)};
constexpr ::VROSC::OscAddresses_ActionType  VROSC::OscAddresses_ActionType::NoteOff{static_cast<int32_t>(0x1)};
constexpr ::VROSC::OscAddresses_ActionType  VROSC::OscAddresses_ActionType::Parameter{static_cast<int32_t>(0x2)};
constexpr ::VROSC::OscAddresses_ActionType  VROSC::OscAddresses_ActionType::Volume{static_cast<int32_t>(0x3)};
constexpr ::VROSC::OscAddresses_ActionType  VROSC::OscAddresses_ActionType::Channel{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::VROSC::OscAddresses.GetOscAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::VROSC::WidgetSettings_Identifier, ::VROSC::OscAddresses_ActionType)>(&::VROSC::OscAddresses::GetOscAddress)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16efe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetOscAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OscAddresses_ActionType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OscAddresses.GetOscAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::VROSC::OscAddresses::GetOscAddress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x16f0134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetOscAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OscAddresses.GetInstrumentOSCName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::OscAddresses::GetInstrumentOSCName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x16eff44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetInstrumentOSCName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OscAddresses._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OscAddresses::*)()>(&::VROSC::OscAddresses::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW VROSC::OscAddresses::GetOscAddress(::StringW  clientName, ::VROSC::WidgetSettings_Identifier  instrument, ::VROSC::OscAddresses_ActionType  actionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetOscAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OscAddresses_ActionType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clientName, instrument, actionType);
}
inline ::StringW VROSC::OscAddresses::GetOscAddress(::StringW  clientName, ::StringW  secondaryAddress, ::StringW  tertiaryAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetOscAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clientName, secondaryAddress, tertiaryAddress);
}
inline ::StringW VROSC::OscAddresses::GetInstrumentOSCName(::VROSC::WidgetSettings_Identifier  instrumentId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        "GetInstrumentOSCName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, instrumentId);
}
inline void VROSC::OscAddresses::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OscAddresses*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OscAddresses* VROSC::OscAddresses::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OscAddresses*>());
}
// Ctor Parameters []
constexpr ::VROSC::OscAddresses::OscAddresses()   {
}
