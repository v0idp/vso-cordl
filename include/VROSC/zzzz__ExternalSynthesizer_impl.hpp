#pragma once
// IWYU pragma private; include "VROSC/ExternalSynthesizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ExternalSynthesizer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ExternalSynthesizer_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__ScalePreset_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ExternalSynthesizer_Status::ExternalSynthesizer_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ExternalSynthesizer_Status::ExternalSynthesizer_Status()   {
}
constexpr ::VROSC::ExternalSynthesizer_Status  VROSC::ExternalSynthesizer_Status::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ExternalSynthesizer_Status  VROSC::ExternalSynthesizer_Status::LookingForConnection{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ExternalSynthesizer_Status  VROSC::ExternalSynthesizer_Status::Connected{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer___c__DisplayClass26_0::*)()>(&::VROSC::ExternalSynthesizer___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1885184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer___c__DisplayClass26_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer___c__DisplayClass26_0._LookForConnection_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer___c__DisplayClass26_0::*)()>(&::VROSC::ExternalSynthesizer___c__DisplayClass26_0::_LookForConnection_b__0)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x188708c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer___c__DisplayClass26_0*>::get(),
                        "<LookForConnection>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ExternalSynthesizer>& VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::ExternalSynthesizer> const& VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_set___4__this(::UnityW<::VROSC::ExternalSynthesizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_get_ipEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ipEndPoint;
}
constexpr ::System::Net::IPEndPoint* const& VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_get_ipEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ipEndPoint;
}
constexpr void VROSC::ExternalSynthesizer___c__DisplayClass26_0::__cordl_internal_set_ipEndPoint(::System::Net::IPEndPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ipEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ExternalSynthesizer___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer___c__DisplayClass26_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer___c__DisplayClass26_0::_LookForConnection_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer___c__DisplayClass26_0*>::get(),
                        "<LookForConnection>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ExternalSynthesizer___c__DisplayClass26_0* VROSC::ExternalSynthesizer___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ExternalSynthesizer___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::ExternalSynthesizer___c__DisplayClass26_0::ExternalSynthesizer___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.get_ClientName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::get_ClientName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18848c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "get_ClientName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.get_ConnectionStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ExternalSynthesizer_Status (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::get_ConnectionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "get_ConnectionStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.set_ConnectionStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::ExternalSynthesizer_Status)>(&::VROSC::ExternalSynthesizer::set_ConnectionStatus)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1884924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "set_ConnectionStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ExternalSynthesizer_Status>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18849a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1884a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18850d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.LookForConnection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::LookForConnection)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1884e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "LookForConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.TearDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::TearDown)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x18850dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.StopLookingForConnection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::StopLookingForConnection)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1884bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "StopLookingForConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.AttemptManualConnection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::AttemptManualConnection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1885274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AttemptManualConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::System::Net::IPAddress*, ::StringW, bool)>(&::VROSC::ExternalSynthesizer::Connect)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x1884c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.Disconnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::Disconnect)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x188518c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.AssignActions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::AssignActions)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1885384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AssignActions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.UnassignActions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::UnassignActions)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1885db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UnassignActions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.SendConnectedMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::SendConnectedMessage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x18855fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SendConnectedMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.SendDisconnectedMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::SendDisconnectedMessage)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1885c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SendDisconnectedMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, int32_t, int32_t, float_t)>(&::VROSC::ExternalSynthesizer::PlayNote)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x188602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, int32_t, int32_t)>(&::VROSC::ExternalSynthesizer::StopNote)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x18861a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.SetParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, float_t, int32_t, int32_t)>(&::VROSC::ExternalSynthesizer::SetParameter)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1886310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, float_t, int32_t)>(&::VROSC::ExternalSynthesizer::SetVolume)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1886478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.SetChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, int32_t, int32_t)>(&::VROSC::ExternalSynthesizer::SetChannel)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18865e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::AllNotesOff)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x18857d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::ExternalSynthesizer::AllNotesOff)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x188672c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.GlobalScaleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::ScalePreset*, ::VROSC::Note)>(&::VROSC::ExternalSynthesizer::GlobalScaleChanged)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1886888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "GlobalScaleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.VisualBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(int32_t)>(&::VROSC::ExternalSynthesizer::VisualBeat)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18869f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "VisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.GlobalVolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(float_t)>(&::VROSC::ExternalSynthesizer::GlobalVolumeChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1886ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "GlobalVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)(::VROSC::UserDataControllers*)>(&::VROSC::ExternalSynthesizer::UserDataLoaded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1886d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer.UpdateConnection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::UpdateConnection)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1886d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UpdateConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ExternalSynthesizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ExternalSynthesizer::*)()>(&::VROSC::ExternalSynthesizer::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1886e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::ExternalSynthesizer::__cordl_internal_get__printToLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____printToLog;
}
constexpr bool const& VROSC::ExternalSynthesizer::__cordl_internal_get__printToLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____printToLog;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__printToLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____printToLog = value;
}
constexpr int32_t& VROSC::ExternalSynthesizer::__cordl_internal_get__broadcastPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcastPort;
}
constexpr int32_t const& VROSC::ExternalSynthesizer::__cordl_internal_get__broadcastPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcastPort;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__broadcastPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadcastPort = value;
}
constexpr int32_t& VROSC::ExternalSynthesizer::__cordl_internal_get__oscServerPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oscServerPort;
}
constexpr int32_t const& VROSC::ExternalSynthesizer::__cordl_internal_get__oscServerPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oscServerPort;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__oscServerPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oscServerPort = value;
}
constexpr ::System::Net::Sockets::UdpClient*& VROSC::ExternalSynthesizer::__cordl_internal_get__udpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr ::System::Net::Sockets::UdpClient* const& VROSC::ExternalSynthesizer::__cordl_internal_get__udpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& VROSC::ExternalSynthesizer::__cordl_internal_get__udpThreadCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpThreadCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& VROSC::ExternalSynthesizer::__cordl_internal_get__udpThreadCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpThreadCancellationTokenSource;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__udpThreadCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpThreadCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPAddress*& VROSC::ExternalSynthesizer::__cordl_internal_get__foundAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundAddress;
}
constexpr ::System::Net::IPAddress* const& VROSC::ExternalSynthesizer::__cordl_internal_get__foundAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundAddress;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__foundAddress(::System::Net::IPAddress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____foundAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::ExternalSynthesizer::__cordl_internal_get__foundIpString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundIpString;
}
constexpr ::StringW const& VROSC::ExternalSynthesizer::__cordl_internal_get__foundIpString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundIpString;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__foundIpString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____foundIpString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ExternalSynthesizer_Status& VROSC::ExternalSynthesizer::__cordl_internal_get__connectionStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionStatus;
}
constexpr ::VROSC::ExternalSynthesizer_Status const& VROSC::ExternalSynthesizer::__cordl_internal_get__connectionStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionStatus;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__connectionStatus(::VROSC::ExternalSynthesizer_Status  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionStatus = value;
}
constexpr ::StringW& VROSC::ExternalSynthesizer::__cordl_internal_get__connectedIp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedIp;
}
constexpr ::StringW const& VROSC::ExternalSynthesizer::__cordl_internal_get__connectedIp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedIp;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__connectedIp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedIp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::ExternalSynthesizer::__cordl_internal_get__connectedClientName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedClientName;
}
constexpr ::StringW const& VROSC::ExternalSynthesizer::__cordl_internal_get__connectedClientName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedClientName;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__connectedClientName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedClientName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& VROSC::ExternalSynthesizer::__cordl_internal_get__oscData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oscData;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& VROSC::ExternalSynthesizer::__cordl_internal_get__oscData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oscData;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__oscData(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oscData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ExternalSynthesizer::__cordl_internal_get__wasUsingExternal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasUsingExternal;
}
constexpr bool const& VROSC::ExternalSynthesizer::__cordl_internal_get__wasUsingExternal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasUsingExternal;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__wasUsingExternal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasUsingExternal = value;
}
constexpr bool& VROSC::ExternalSynthesizer::__cordl_internal_get__lastConnectionWasManual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConnectionWasManual;
}
constexpr bool const& VROSC::ExternalSynthesizer::__cordl_internal_get__lastConnectionWasManual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConnectionWasManual;
}
constexpr void VROSC::ExternalSynthesizer::__cordl_internal_set__lastConnectionWasManual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastConnectionWasManual = value;
}
inline void VROSC::ExternalSynthesizer::setStaticF_OnConnectionStatusChanged(::System::Action_1<::VROSC::ExternalSynthesizer_Status>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::ExternalSynthesizer_Status>*, "OnConnectionStatusChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get>(std::forward<::System::Action_1<::VROSC::ExternalSynthesizer_Status>*>(value));
}
inline ::System::Action_1<::VROSC::ExternalSynthesizer_Status>* VROSC::ExternalSynthesizer::getStaticF_OnConnectionStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::ExternalSynthesizer_Status>*, "OnConnectionStatusChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get>();
}
inline void VROSC::ExternalSynthesizer::setStaticF_OnUseExternalSynthesizerChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnUseExternalSynthesizerChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* VROSC::ExternalSynthesizer::getStaticF_OnUseExternalSynthesizerChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnUseExternalSynthesizerChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get>();
}
inline ::StringW VROSC::ExternalSynthesizer::get_ClientName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "get_ClientName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::ExternalSynthesizer_Status VROSC::ExternalSynthesizer::get_ConnectionStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "get_ConnectionStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::ExternalSynthesizer_Status, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::set_ConnectionStatus(::VROSC::ExternalSynthesizer_Status  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "set_ConnectionStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ExternalSynthesizer_Status>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::ExternalSynthesizer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::LookForConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "LookForConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::TearDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::StopLookingForConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "StopLookingForConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::AttemptManualConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AttemptManualConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::Connect(::System::Net::IPAddress*  ipAddress, ::StringW  ipString, bool  isManual)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ipAddress, ipString, isManual);
}
inline void VROSC::ExternalSynthesizer::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::AssignActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AssignActions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::UnassignActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UnassignActions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::SendConnectedMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SendConnectedMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::SendDisconnectedMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SendDisconnectedMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, int32_t  channel, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, note, channel, velocity);
}
inline void VROSC::ExternalSynthesizer::StopNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, note, channel);
}
inline void VROSC::ExternalSynthesizer::SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, parameterValue, parameterId, channel);
}
inline void VROSC::ExternalSynthesizer::SetVolume(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  volume, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, volume, channel);
}
inline void VROSC::ExternalSynthesizer::SetChannel(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel, int32_t  oldChannel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "SetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, channel, oldChannel);
}
inline void VROSC::ExternalSynthesizer::AllNotesOff()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::AllNotesOff(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, channel);
}
inline void VROSC::ExternalSynthesizer::GlobalScaleChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "GlobalScaleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scalePreset, note);
}
inline void VROSC::ExternalSynthesizer::VisualBeat(int32_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "VisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::ExternalSynthesizer::GlobalVolumeChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "GlobalVolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
template<typename T>
inline void VROSC::ExternalSynthesizer::Send(::StringW  address, ::System::Collections::Generic::List_1<T>*  data)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                    "Send",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, data);
}
inline void VROSC::ExternalSynthesizer::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::ExternalSynthesizer::UpdateConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        "UpdateConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ExternalSynthesizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ExternalSynthesizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ExternalSynthesizer* VROSC::ExternalSynthesizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ExternalSynthesizer*>());
}
// Ctor Parameters []
constexpr ::VROSC::ExternalSynthesizer::ExternalSynthesizer()   {
}
