#pragma once
// IWYU pragma private; include "RSG/PromiseTimer.hpp"
#include "RSG/zzzz__IPromiseTimer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RSG/zzzz__PromiseTimer_def.hpp"
#include "RSG/zzzz__IPromise_def.hpp"
#include "RSG/zzzz__PredicateWait_def.hpp"
#include "RSG/zzzz__PromiseTimer_def.hpp"
#include "RSG/zzzz__TimeData_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::RSG::PromiseTimer___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseTimer___c__DisplayClass3_0::*)()>(&::RSG::PromiseTimer___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer___c__DisplayClass3_0._WaitFor_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RSG::PromiseTimer___c__DisplayClass3_0::*)(::RSG::TimeData)>(&::RSG::PromiseTimer___c__DisplayClass3_0::_WaitFor_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17f3974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass3_0*>::get(),
                        "<WaitFor>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::TimeData>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& RSG::PromiseTimer___c__DisplayClass3_0::__cordl_internal_get_seconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr float_t const& RSG::PromiseTimer___c__DisplayClass3_0::__cordl_internal_get_seconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr void RSG::PromiseTimer___c__DisplayClass3_0::__cordl_internal_set_seconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seconds = value;
}
inline void RSG::PromiseTimer___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass3_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RSG::PromiseTimer___c__DisplayClass3_0::_WaitFor_b__0(::RSG::TimeData  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass3_0*>::get(),
                        "<WaitFor>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::TimeData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::RSG::PromiseTimer___c__DisplayClass3_0* RSG::PromiseTimer___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PromiseTimer___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::RSG::PromiseTimer___c__DisplayClass3_0::PromiseTimer___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::RSG::PromiseTimer___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseTimer___c__DisplayClass4_0::*)()>(&::RSG::PromiseTimer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f320c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer___c__DisplayClass4_0._WaitWhile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RSG::PromiseTimer___c__DisplayClass4_0::*)(::RSG::TimeData)>(&::RSG::PromiseTimer___c__DisplayClass4_0::_WaitWhile_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17f3988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass4_0*>::get(),
                        "<WaitWhile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::TimeData>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::RSG::TimeData,bool>*& RSG::PromiseTimer___c__DisplayClass4_0::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr ::System::Func_2<::RSG::TimeData,bool>* const& RSG::PromiseTimer___c__DisplayClass4_0::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr void RSG::PromiseTimer___c__DisplayClass4_0::__cordl_internal_set_predicate(::System::Func_2<::RSG::TimeData,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::PromiseTimer___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RSG::PromiseTimer___c__DisplayClass4_0::_WaitWhile_b__0(::RSG::TimeData  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer___c__DisplayClass4_0*>::get(),
                        "<WaitWhile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::TimeData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::RSG::PromiseTimer___c__DisplayClass4_0* RSG::PromiseTimer___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PromiseTimer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::RSG::PromiseTimer___c__DisplayClass4_0::PromiseTimer___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::RSG::PromiseTimer.WaitFor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::PromiseTimer::*)(float_t)>(&::RSG::PromiseTimer::WaitFor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x17f2fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitFor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.WaitWhile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::PromiseTimer::*)(::System::Func_2<::RSG::TimeData,bool>*)>(&::RSG::PromiseTimer::WaitWhile)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x17f3154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitWhile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::RSG::TimeData,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.WaitUntil
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::PromiseTimer::*)(::System::Func_2<::RSG::TimeData,bool>*)>(&::RSG::PromiseTimer::WaitUntil)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17f3080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitUntil",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::RSG::TimeData,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.Cancel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RSG::PromiseTimer::*)(::RSG::IPromise*)>(&::RSG::PromiseTimer::Cancel)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17f32d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "Cancel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.FindInWaiting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* (::RSG::PromiseTimer::*)(::RSG::IPromise*)>(&::RSG::PromiseTimer::FindInWaiting)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x17f341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "FindInWaiting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseTimer::*)(float_t)>(&::RSG::PromiseTimer::Update)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x17f35bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer.RemoveNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* (::RSG::PromiseTimer::*)(::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*)>(&::RSG::PromiseTimer::RemoveNode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17f386c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "RemoveNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::PromiseTimer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PromiseTimer::*)()>(&::RSG::PromiseTimer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17f38f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& RSG::PromiseTimer::__cordl_internal_get_curTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curTime;
}
constexpr float_t const& RSG::PromiseTimer::__cordl_internal_get_curTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curTime;
}
constexpr void RSG::PromiseTimer::__cordl_internal_set_curTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curTime = value;
}
constexpr int32_t& RSG::PromiseTimer::__cordl_internal_get_curFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curFrame;
}
constexpr int32_t const& RSG::PromiseTimer::__cordl_internal_get_curFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curFrame;
}
constexpr void RSG::PromiseTimer::__cordl_internal_set_curFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curFrame = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*& RSG::PromiseTimer::__cordl_internal_get_waiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr ::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>* const& RSG::PromiseTimer::__cordl_internal_get_waiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr void RSG::PromiseTimer::__cordl_internal_set_waiting(::System::Collections::Generic::LinkedList_1<::RSG::PredicateWait*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waiting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RSG::IPromise* RSG::PromiseTimer::WaitFor(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitFor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, seconds);
}
inline ::RSG::IPromise* RSG::PromiseTimer::WaitWhile(::System::Func_2<::RSG::TimeData,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitWhile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::RSG::TimeData,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, predicate);
}
inline ::RSG::IPromise* RSG::PromiseTimer::WaitUntil(::System::Func_2<::RSG::TimeData,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "WaitUntil",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::RSG::TimeData,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, predicate);
}
inline bool RSG::PromiseTimer::Cancel(::RSG::IPromise*  promise)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "Cancel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, promise);
}
inline ::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* RSG::PromiseTimer::FindInWaiting(::RSG::IPromise*  promise)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "FindInWaiting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*, false>(this, ___internal_method, promise);
}
inline void RSG::PromiseTimer::Update(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>* RSG::PromiseTimer::RemoveNode(::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        "RemoveNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::RSG::PredicateWait*>*, false>(this, ___internal_method, node);
}
inline void RSG::PromiseTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PromiseTimer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::PromiseTimer* RSG::PromiseTimer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PromiseTimer*>());
}
/// @brief Convert operator to "::RSG::IPromiseTimer"
constexpr  RSG::PromiseTimer::operator ::RSG::IPromiseTimer*() noexcept {
return static_cast<::RSG::IPromiseTimer*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IPromiseTimer"
constexpr ::RSG::IPromiseTimer* RSG::PromiseTimer::i___RSG__IPromiseTimer() noexcept {
return static_cast<::RSG::IPromiseTimer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::RSG::PromiseTimer::PromiseTimer()   {
}
