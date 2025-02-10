#pragma once
// IWYU pragma private; include "DG/Tweening/Sequence.hpp"
#include "DG/Tweening/zzzz__Tween_impl.hpp"
#include "DG/Tweening/zzzz__Sequence_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateMode_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateNotice_def.hpp"
#include "DG/Tweening/Core/zzzz__ABSSequentiable_def.hpp"
#include "DG/Tweening/zzzz__TweenCallback_def.hpp"
#include "DG/Tweening/zzzz__Tween_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Sequence._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Sequence::*)()>(&::DG::Tweening::Sequence::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x18c8b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoPrepend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*)>(&::DG::Tweening::Sequence::DoPrepend)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18c8c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoPrepend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoInsert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::DG::Tweening::Sequence*, ::DG::Tweening::Tween*, float_t)>(&::DG::Tweening::Sequence::DoInsert)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18c8d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoInsert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoAppendInterval
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::DG::Tweening::Sequence*, float_t)>(&::DG::Tweening::Sequence::DoAppendInterval)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18c8f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoAppendInterval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoPrependInterval
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::DG::Tweening::Sequence*, float_t)>(&::DG::Tweening::Sequence::DoPrependInterval)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18c8f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoPrependInterval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoInsertCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::DG::Tweening::Sequence*, ::DG::Tweening::TweenCallback*, float_t)>(&::DG::Tweening::Sequence::DoInsertCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18c9000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoInsertCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::TweenCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Sequence::*)()>(&::DG::Tweening::Sequence::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18c9100;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.Validate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::DG::Tweening::Sequence::*)()>(&::DG::Tweening::Sequence::Validate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18c9238;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.Startup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::DG::Tweening::Sequence::*)()>(&::DG::Tweening::Sequence::Startup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18c92f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.ApplyTween
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::DG::Tweening::Sequence::*)(float_t, int32_t, int32_t, bool, ::DG::Tweening::Core::Enums::UpdateMode, ::DG::Tweening::Core::Enums::UpdateNotice)>(&::DG::Tweening::Sequence::ApplyTween)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18c9438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Sequence*)>(&::DG::Tweening::Sequence::Setup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18c44e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoStartup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Sequence*)>(&::DG::Tweening::Sequence::DoStartup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18c92f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoStartup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.DoApplyTween
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Sequence*, float_t, int32_t, int32_t, bool, ::DG::Tweening::Core::Enums::UpdateMode)>(&::DG::Tweening::Sequence::DoApplyTween)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x18c9440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoApplyTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.ApplyInternalCycle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Sequence*, float_t, float_t, ::DG::Tweening::Core::Enums::UpdateMode, bool, bool, bool)>(&::DG::Tweening::Sequence::ApplyInternalCycle)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x18c9898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "ApplyInternalCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.StableSortSequencedObjs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*)>(&::DG::Tweening::Sequence::StableSortSequencedObjs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x18c976c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "StableSortSequencedObjs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Sequence.IsAnyCallbackSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Sequence*)>(&::DG::Tweening::Sequence::IsAnyCallbackSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18c970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "IsAnyCallbackSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*& DG::Tweening::Sequence::__cordl_internal_get_sequencedTweens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedTweens;
}
constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* const& DG::Tweening::Sequence::__cordl_internal_get_sequencedTweens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedTweens;
}
constexpr void DG::Tweening::Sequence::__cordl_internal_set_sequencedTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sequencedTweens)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*& DG::Tweening::Sequence::__cordl_internal_get__sequencedObjs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequencedObjs;
}
constexpr ::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>* const& DG::Tweening::Sequence::__cordl_internal_get__sequencedObjs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequencedObjs;
}
constexpr void DG::Tweening::Sequence::__cordl_internal_set__sequencedObjs(::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sequencedObjs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& DG::Tweening::Sequence::__cordl_internal_get_lastTweenInsertTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTweenInsertTime;
}
constexpr float_t const& DG::Tweening::Sequence::__cordl_internal_get_lastTweenInsertTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTweenInsertTime;
}
constexpr void DG::Tweening::Sequence::__cordl_internal_set_lastTweenInsertTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTweenInsertTime = value;
}
inline void DG::Tweening::Sequence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::DoPrepend(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoPrepend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, inSequence, t);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::DoInsert(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::Tween*  t, float_t  atPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoInsert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, inSequence, t, atPosition);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::DoAppendInterval(::DG::Tweening::Sequence*  inSequence, float_t  interval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoAppendInterval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, inSequence, interval);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::DoPrependInterval(::DG::Tweening::Sequence*  inSequence, float_t  interval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoPrependInterval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, inSequence, interval);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::DoInsertCallback(::DG::Tweening::Sequence*  inSequence, ::DG::Tweening::TweenCallback*  callback, float_t  atPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoInsertCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::TweenCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method, inSequence, callback, atPosition);
}
inline void DG::Tweening::Sequence::Reset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool DG::Tweening::Sequence::Validate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool DG::Tweening::Sequence::Startup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool DG::Tweening::Sequence::ApplyTween(float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
}
inline void DG::Tweening::Sequence::Setup(::DG::Tweening::Sequence*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s);
}
inline bool DG::Tweening::Sequence::DoStartup(::DG::Tweening::Sequence*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoStartup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline bool DG::Tweening::Sequence::DoApplyTween(::DG::Tweening::Sequence*  s, float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "DoApplyTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode);
}
inline bool DG::Tweening::Sequence::ApplyInternalCycle(::DG::Tweening::Sequence*  s, float_t  fromPos, float_t  toPos, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, bool  useInverse, bool  prevPosIsInverse, bool  multiCycleStep)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "ApplyInternalCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, fromPos, toPos, updateMode, useInverse, prevPosIsInverse, multiCycleStep);
}
inline void DG::Tweening::Sequence::StableSortSequencedObjs(::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "StableSortSequencedObjs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Core::ABSSequentiable*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list);
}
inline bool DG::Tweening::Sequence::IsAnyCallbackSet(::DG::Tweening::Sequence*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Sequence*>::get(),
                        "IsAnyCallbackSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Sequence::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Sequence*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Sequence::Sequence()   {
}
