#pragma once
// IWYU pragma private; include "RSG/PredicateWait.hpp"
#include "RSG/zzzz__TimeData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RSG/zzzz__PredicateWait_def.hpp"
#include "RSG/zzzz__IPendingPromise_def.hpp"
#include "RSG/zzzz__TimeData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::RSG::PredicateWait._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::PredicateWait::*)()>(&::RSG::PredicateWait::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PredicateWait*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::RSG::TimeData,bool>*& RSG::PredicateWait::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr ::System::Func_2<::RSG::TimeData,bool>* const& RSG::PredicateWait::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr void RSG::PredicateWait::__cordl_internal_set_predicate(::System::Func_2<::RSG::TimeData,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RSG::PredicateWait::__cordl_internal_get_timeStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStarted;
}
constexpr float_t const& RSG::PredicateWait::__cordl_internal_get_timeStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStarted;
}
constexpr void RSG::PredicateWait::__cordl_internal_set_timeStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeStarted = value;
}
constexpr ::RSG::IPendingPromise*& RSG::PredicateWait::__cordl_internal_get_pendingPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPromise;
}
constexpr ::RSG::IPendingPromise* const& RSG::PredicateWait::__cordl_internal_get_pendingPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPromise;
}
constexpr void RSG::PredicateWait::__cordl_internal_set_pendingPromise(::RSG::IPendingPromise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pendingPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::TimeData& RSG::PredicateWait::__cordl_internal_get_timeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeData;
}
constexpr ::RSG::TimeData const& RSG::PredicateWait::__cordl_internal_get_timeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeData;
}
constexpr void RSG::PredicateWait::__cordl_internal_set_timeData(::RSG::TimeData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeData = value;
}
constexpr int32_t& RSG::PredicateWait::__cordl_internal_get_frameStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameStarted;
}
constexpr int32_t const& RSG::PredicateWait::__cordl_internal_get_frameStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameStarted;
}
constexpr void RSG::PredicateWait::__cordl_internal_set_frameStarted(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameStarted = value;
}
inline void RSG::PredicateWait::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::PredicateWait*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::PredicateWait* RSG::PredicateWait::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::PredicateWait*>());
}
// Ctor Parameters []
constexpr ::RSG::PredicateWait::PredicateWait()   {
}
