#pragma once
// IWYU pragma private; include "VROSC/EmissionOnSignal.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__EmissionOnSignal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "VROSC/zzzz__EmissionOnSignal_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::EmissionOnSignal__NodeBegin_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal__NodeBegin_d__11::*)()>(&::VROSC::EmissionOnSignal__NodeBegin_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x17273b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal__NodeBegin_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal__NodeBegin_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal__NodeBegin_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::EmissionOnSignal__NodeBegin_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17276d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal__NodeBegin_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::EmissionOnSignal__NodeBegin_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal__NodeBegin_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EmissionOnSignal__NodeBegin_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal__NodeBegin_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::EmissionOnSignal__NodeBegin_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::EmissionOnSignal__NodeBegin_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "signal", ty: "::VROSC::Signal*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::EmissionOnSignal>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::EmissionOnSignal__NodeBegin_d__11::EmissionOnSignal__NodeBegin_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::Signal*  signal, ::UnityW<::VROSC::EmissionOnSignal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->signal = signal;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::EmissionOnSignal__NodeBegin_d__11::EmissionOnSignal__NodeBegin_d__11()   {
}
//  Writing Method size for method: ::VROSC::EmissionOnSignal.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::UnityEngine::Color)>(&::VROSC::EmissionOnSignal::SetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17270c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)()>(&::VROSC::EmissionOnSignal::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17270d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::NodeBegin)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1727188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::NodeStay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1727220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::NodeEnd)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1727274;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)()>(&::VROSC::EmissionOnSignal::Update)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x17272cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.TurnOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::TurnOn)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1727378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "TurnOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.StayOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::StayOn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1727250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "StayOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.TurnOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&::VROSC::EmissionOnSignal::TurnOff)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17272b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "TurnOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal.SetEmission
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)(float_t)>(&::VROSC::EmissionOnSignal::SetEmission)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1727108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "SetEmission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EmissionOnSignal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EmissionOnSignal::*)()>(&::VROSC::EmissionOnSignal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17273ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::EmissionOnSignal::__cordl_internal_get__outputRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::EmissionOnSignal::__cordl_internal_get__outputRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputRenderer;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__outputRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::EmissionOnSignal::__cordl_internal_get__emissionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emissionColor;
}
constexpr ::UnityEngine::Color const& VROSC::EmissionOnSignal::__cordl_internal_get__emissionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emissionColor;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__emissionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emissionColor = value;
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__zeroBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroBrightness;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__zeroBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroBrightness;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__zeroBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zeroBrightness = value;
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__oneBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneBrightness;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__oneBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneBrightness;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__oneBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oneBrightness = value;
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__rampUpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rampUpTime;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__rampUpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rampUpTime;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__rampUpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rampUpTime = value;
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__rampDownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rampDownTime;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__rampDownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rampDownTime;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__rampDownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rampDownTime = value;
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::EmissionOnSignal::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::EmissionOnSignal::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__targetBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetBrightness;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__targetBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetBrightness;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__targetBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetBrightness = value;
}
constexpr float_t& VROSC::EmissionOnSignal::__cordl_internal_get__currentBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBrightness;
}
constexpr float_t const& VROSC::EmissionOnSignal::__cordl_internal_get__currentBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBrightness;
}
constexpr void VROSC::EmissionOnSignal::__cordl_internal_set__currentBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBrightness = value;
}
inline void VROSC::EmissionOnSignal::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::EmissionOnSignal::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EmissionOnSignal::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EmissionOnSignal::TurnOn(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "TurnOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::StayOn(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "StayOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::TurnOff(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "TurnOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::EmissionOnSignal::SetEmission(float_t  brightness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        "SetEmission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brightness);
}
inline void VROSC::EmissionOnSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EmissionOnSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EmissionOnSignal* VROSC::EmissionOnSignal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EmissionOnSignal*>());
}
// Ctor Parameters []
constexpr ::VROSC::EmissionOnSignal::EmissionOnSignal()   {
}
