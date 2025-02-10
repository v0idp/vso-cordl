#pragma once
// IWYU pragma private; include "VROSC/BypassStateFilter.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__BypassStateFilter_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::BypassStateFilter.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BypassStateFilter::*)(::VROSC::Signal*)>(&::VROSC::BypassStateFilter::FilterSignal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17213f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BypassStateFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BypassStateFilter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BypassStateFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BypassStateFilter::*)()>(&::VROSC::BypassStateFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1721420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BypassStateFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SignalNode>& VROSC::BypassStateFilter::__cordl_internal_get__signalNodeToCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalNodeToCheck;
}
constexpr ::UnityW<::VROSC::SignalNode> const& VROSC::BypassStateFilter::__cordl_internal_get__signalNodeToCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalNodeToCheck;
}
constexpr void VROSC::BypassStateFilter::__cordl_internal_set__signalNodeToCheck(::UnityW<::VROSC::SignalNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signalNodeToCheck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::BypassStateFilter::__cordl_internal_get__passOnFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnFalse;
}
constexpr bool const& VROSC::BypassStateFilter::__cordl_internal_get__passOnFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnFalse;
}
constexpr void VROSC::BypassStateFilter::__cordl_internal_set__passOnFalse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____passOnFalse = value;
}
inline void VROSC::BypassStateFilter::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BypassStateFilter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::BypassStateFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BypassStateFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BypassStateFilter* VROSC::BypassStateFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BypassStateFilter*>());
}
// Ctor Parameters []
constexpr ::VROSC::BypassStateFilter::BypassStateFilter()   {
}
