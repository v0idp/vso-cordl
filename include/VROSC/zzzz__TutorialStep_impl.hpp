#pragma once
// IWYU pragma private; include "VROSC/TutorialStep.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__TutorialStep_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "VROSC/zzzz__TutorialStep_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialStep_Condition._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep_Condition::*)()>(&::VROSC::TutorialStep_Condition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep_Condition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::TutorialStep_Condition::__cordl_internal_get_Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Text;
}
constexpr ::StringW const& VROSC::TutorialStep_Condition::__cordl_internal_get_Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Text;
}
constexpr void VROSC::TutorialStep_Condition::__cordl_internal_set_Text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::TutorialStep_Condition::__cordl_internal_get_OnConditionCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConditionCompleted;
}
constexpr ::System::Action* const& VROSC::TutorialStep_Condition::__cordl_internal_get_OnConditionCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConditionCompleted;
}
constexpr void VROSC::TutorialStep_Condition::__cordl_internal_set_OnConditionCompleted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnConditionCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TutorialStep_Condition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep_Condition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialStep_Condition* VROSC::TutorialStep_Condition::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialStep_Condition*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialStep_Condition::TutorialStep_Condition()   {
}
//  Writing Method size for method: ::VROSC::TutorialStep___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep___c::*)()>(&::VROSC::TutorialStep___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep___c._Replay_b__27_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TutorialStep___c::*)(::UnityEngine::Timeline::TrackAsset*)>(&::VROSC::TutorialStep___c::_Replay_b__27_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1707e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get(),
                        "<Replay>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TutorialStep___c::setStaticF___9(::VROSC::TutorialStep___c*  value)  {
::cordl_internals::setStaticField<::VROSC::TutorialStep___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get>(std::forward<::VROSC::TutorialStep___c*>(value));
}
inline ::VROSC::TutorialStep___c* VROSC::TutorialStep___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::TutorialStep___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get>();
}
inline void VROSC::TutorialStep___c::setStaticF___9__27_0(::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>* VROSC::TutorialStep___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Timeline::TrackAsset>,bool>*, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get>();
}
inline void VROSC::TutorialStep___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::TutorialStep___c::_Replay_b__27_0(::UnityEngine::Timeline::TrackAsset*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep___c*>::get(),
                        "<Replay>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::VROSC::TutorialStep___c* VROSC::TutorialStep___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialStep___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialStep___c::TutorialStep___c()   {
}
//  Writing Method size for method: ::VROSC::TutorialStep.get_Conditions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*> (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::get_Conditions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_Conditions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.get_TipText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::get_TipText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_TipText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.get_AutoContinue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::get_AutoContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_AutoContinue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.IsFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::IsFinished)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17056ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "IsFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.get_IsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170732c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.set_IsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)(bool)>(&::VROSC::TutorialStep::set_IsCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1707334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "set_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::TutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x1707340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.ConditionsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::ConditionsCompleted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17075d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "ConditionsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.TimelineEnded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)(::UnityEngine::Playables::PlayableDirector*)>(&::VROSC::TutorialStep::TimelineEnded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1707698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "TimelineEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::OnExit)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x170773c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::Tick)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1707980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::TutorialStep::UpdateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1707a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.Replay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::Replay)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1707a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.TimelineReachedEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::TimelineReachedEnd)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1707cc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.FinishStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::FinishStep)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1706ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "FinishStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::Stop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1706998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep.OnAppPaused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)(bool)>(&::VROSC::TutorialStep::OnAppPaused)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1707d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "OnAppPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialStep._IsFinished_b__11_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TutorialStep::*)()>(&::VROSC::TutorialStep::_IsFinished_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1707da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "<IsFinished>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& VROSC::TutorialStep::__cordl_internal_get__playableDirector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& VROSC::TutorialStep::__cordl_internal_get__playableDirector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playableDirector;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playableDirector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::TutorialStep::__cordl_internal_get__tipText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipText;
}
constexpr ::StringW const& VROSC::TutorialStep::__cordl_internal_get__tipText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipText;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__tipText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tipText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TutorialStep::__cordl_internal_get__autoContinue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoContinue;
}
constexpr bool const& VROSC::TutorialStep::__cordl_internal_get__autoContinue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoContinue;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__autoContinue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoContinue = value;
}
constexpr ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>& VROSC::TutorialStep::__cordl_internal_get__conditions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditions;
}
constexpr ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*> const& VROSC::TutorialStep::__cordl_internal_get__conditions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditions;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__conditions(::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conditions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TutorialStep::__cordl_internal_get__isFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFinished;
}
constexpr bool const& VROSC::TutorialStep::__cordl_internal_get__isFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFinished;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__isFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFinished = value;
}
constexpr ::System::Action*& VROSC::TutorialStep::__cordl_internal_get_OnConditionsCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConditionsCompleted;
}
constexpr ::System::Action* const& VROSC::TutorialStep::__cordl_internal_get_OnConditionsCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConditionsCompleted;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set_OnConditionsCompleted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnConditionsCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TutorialStep::__cordl_internal_get__IsCompleted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr bool const& VROSC::TutorialStep::__cordl_internal_get__IsCompleted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__IsCompleted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCompleted_k__BackingField = value;
}
constexpr bool& VROSC::TutorialStep::__cordl_internal_get__timelineReachedEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineReachedEnd;
}
constexpr bool const& VROSC::TutorialStep::__cordl_internal_get__timelineReachedEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timelineReachedEnd;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__timelineReachedEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timelineReachedEnd = value;
}
constexpr bool& VROSC::TutorialStep::__cordl_internal_get__isReplayingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReplayingAudio;
}
constexpr bool const& VROSC::TutorialStep::__cordl_internal_get__isReplayingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReplayingAudio;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set__isReplayingAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isReplayingAudio = value;
}
constexpr ::System::Action*& VROSC::TutorialStep::__cordl_internal_get_OnTimelineReachedEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimelineReachedEnd;
}
constexpr ::System::Action* const& VROSC::TutorialStep::__cordl_internal_get_OnTimelineReachedEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTimelineReachedEnd;
}
constexpr void VROSC::TutorialStep::__cordl_internal_set_OnTimelineReachedEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnTimelineReachedEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*> VROSC::TutorialStep::get_Conditions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_Conditions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::TutorialStep_Condition*,::Array<::VROSC::TutorialStep_Condition*>*>, false>(this, ___internal_method);
}
inline ::StringW VROSC::TutorialStep::get_TipText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_TipText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool VROSC::TutorialStep::get_AutoContinue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_AutoContinue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* VROSC::TutorialStep::IsFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "IsFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline bool VROSC::TutorialStep::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "get_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::set_IsCompleted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "set_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::TutorialStep::ConditionsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "ConditionsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::TimelineEnded(::UnityEngine::Playables::PlayableDirector*  director)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "TimelineEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, director);
}
inline void VROSC::TutorialStep::OnExit()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::Tick()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::TutorialStep::Replay()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::TimelineReachedEnd()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::FinishStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "FinishStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialStep::OnAppPaused(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "OnAppPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paused);
}
inline void VROSC::TutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::TutorialStep::_IsFinished_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialStep*>::get(),
                        "<IsFinished>b__11_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VROSC::TutorialStep* VROSC::TutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialStep*>());
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::TutorialStep::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::TutorialStep::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::TutorialStep::TutorialStep()   {
}
