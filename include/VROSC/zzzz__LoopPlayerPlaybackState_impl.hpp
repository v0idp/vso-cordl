#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackSettings_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlayerPlaybackState_Activity::LoopPlayerPlaybackState_Activity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackState_Activity::LoopPlayerPlaybackState_Activity()   {
}
constexpr ::VROSC::LoopPlayerPlaybackState_Activity  VROSC::LoopPlayerPlaybackState_Activity::WaitingToBegin{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopPlayerPlaybackState_Activity  VROSC::LoopPlayerPlaybackState_Activity::Running{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoopPlayerPlaybackState_Activity  VROSC::LoopPlayerPlaybackState_Activity::Ended{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.set_NextState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState*)>(&::VROSC::LoopPlayerPlaybackState::set_NextState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_NextState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState* (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_NextState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.set_CurrentActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState_Activity)>(&::VROSC::LoopPlayerPlaybackState::set_CurrentActivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_CurrentActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState_Activity>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_CurrentActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState_Activity (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_CurrentActivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_CurrentActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.set_StateBeginSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::set_StateBeginSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_StateBeginSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_StateBeginSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_StateBeginSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_StateBeginSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.set_StateEndSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::set_StateEndSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_StateEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_StateEndSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_StateEndSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_StateEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.set_Fading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(bool)>(&::VROSC::LoopPlayerPlaybackState::set_Fading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a5f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_Fading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_Fading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_Fading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_Fading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_Playing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_Playing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_HasEnded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_HasEnded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18a5f64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.get_WaitingToBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::get_WaitingToBegin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x189a064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_WaitingToBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.GetCurrentFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::GetCurrentFade)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.SetExplicit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(int32_t, int32_t)>(&::VROSC::LoopPlayerPlaybackState::SetExplicit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a5f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.SetNextState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState*)>(&::VROSC::LoopPlayerPlaybackState::SetNextState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "SetNextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.CheckActivityChangeBeforeSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::CheckActivityChangeBeforeSample)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x189b2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "CheckActivityChangeBeforeSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.EvaluateRunningAndFlagActivityChangeAtSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::EvaluateRunningAndFlagActivityChangeAtSample)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x189b398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "EvaluateRunningAndFlagActivityChangeAtSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.SetActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackState::SetActivity)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18a5f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "SetActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.SetStateActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackSettings*, int32_t)>(&::VROSC::LoopPlayerPlaybackState::SetStateActive)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18a5fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.DebugString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::DebugString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState.GetBeginProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackState::*)(int32_t, int32_t)>(&::VROSC::LoopPlayerPlaybackState::GetBeginProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18a5fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "GetBeginProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackState::*)()>(&::VROSC::LoopPlayerPlaybackState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a6020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlayerPlaybackState*& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__NextState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackState* const& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__NextState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackState::__cordl_internal_set__NextState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NextState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackState_Activity& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__CurrentActivity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentActivity_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackState_Activity const& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__CurrentActivity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentActivity_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackState::__cordl_internal_set__CurrentActivity_k__BackingField(::VROSC::LoopPlayerPlaybackState_Activity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentActivity_k__BackingField = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__StateBeginSample_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateBeginSample_k__BackingField;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__StateBeginSample_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateBeginSample_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackState::__cordl_internal_set__StateBeginSample_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StateBeginSample_k__BackingField = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__StateEndSample_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateEndSample_k__BackingField;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__StateEndSample_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StateEndSample_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackState::__cordl_internal_set__StateEndSample_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StateEndSample_k__BackingField = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__Fading_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fading_k__BackingField;
}
constexpr bool const& VROSC::LoopPlayerPlaybackState::__cordl_internal_get__Fading_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fading_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackState::__cordl_internal_set__Fading_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Fading_k__BackingField = value;
}
inline void VROSC::LoopPlayerPlaybackState::set_NextState(::VROSC::LoopPlayerPlaybackState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackState* VROSC::LoopPlayerPlaybackState::get_NextState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackState::set_CurrentActivity(::VROSC::LoopPlayerPlaybackState_Activity  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_CurrentActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState_Activity>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackState_Activity VROSC::LoopPlayerPlaybackState::get_CurrentActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_CurrentActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackState_Activity, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackState::set_StateBeginSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_StateBeginSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::LoopPlayerPlaybackState::get_StateBeginSample()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_StateBeginSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackState::set_StateEndSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_StateEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::LoopPlayerPlaybackState::get_StateEndSample()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_StateEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackState::set_Fading(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "set_Fading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::LoopPlayerPlaybackState::get_Fading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_Fading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackState::get_Playing()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackState::get_HasEnded()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackState::get_WaitingToBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "get_WaitingToBegin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::LoopPlayerPlaybackState::GetCurrentFade(int32_t  atSample)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, atSample);
}
inline void VROSC::LoopPlayerPlaybackState::SetExplicit(int32_t  startSample, int32_t  stopSample)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startSample, stopSample);
}
inline void VROSC::LoopPlayerPlaybackState::SetNextState(::VROSC::LoopPlayerPlaybackState*  nextState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "SetNextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextState);
}
inline bool VROSC::LoopPlayerPlaybackState::CheckActivityChangeBeforeSample(int32_t  sample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "CheckActivityChangeBeforeSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sample);
}
inline bool VROSC::LoopPlayerPlaybackState::EvaluateRunningAndFlagActivityChangeAtSample(int32_t  sample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "EvaluateRunningAndFlagActivityChangeAtSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sample);
}
inline void VROSC::LoopPlayerPlaybackState::SetActivity(int32_t  sample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "SetActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sample);
}
inline void VROSC::LoopPlayerPlaybackState::SetStateActive(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  atSample)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, atSample);
}
inline ::StringW VROSC::LoopPlayerPlaybackState::DebugString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t VROSC::LoopPlayerPlaybackState::GetBeginProgress(int32_t  startSample, int32_t  currentSyncSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        "GetBeginProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, startSample, currentSyncSample);
}
inline void VROSC::LoopPlayerPlaybackState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackState* VROSC::LoopPlayerPlaybackState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackState*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackState::LoopPlayerPlaybackState()   {
}
