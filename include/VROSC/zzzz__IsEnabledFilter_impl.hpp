#pragma once
// IWYU pragma private; include "VROSC/IsEnabledFilter.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__IsEnabledFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::IsEnabledFilter.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IsEnabledFilter::*)(::VROSC::Signal*)>(&::VROSC::IsEnabledFilter::FilterSignal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1721820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IsEnabledFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IsEnabledFilter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IsEnabledFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IsEnabledFilter::*)()>(&::VROSC::IsEnabledFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17218f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IsEnabledFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& VROSC::IsEnabledFilter::__cordl_internal_get__enablableToCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enablableToCheck;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& VROSC::IsEnabledFilter::__cordl_internal_get__enablableToCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enablableToCheck;
}
constexpr void VROSC::IsEnabledFilter::__cordl_internal_set__enablableToCheck(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enablableToCheck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::IsEnabledFilter::__cordl_internal_get__passOnFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnFalse;
}
constexpr bool const& VROSC::IsEnabledFilter::__cordl_internal_get__passOnFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passOnFalse;
}
constexpr void VROSC::IsEnabledFilter::__cordl_internal_set__passOnFalse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____passOnFalse = value;
}
inline void VROSC::IsEnabledFilter::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IsEnabledFilter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::IsEnabledFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IsEnabledFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IsEnabledFilter* VROSC::IsEnabledFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IsEnabledFilter*>());
}
// Ctor Parameters []
constexpr ::VROSC::IsEnabledFilter::IsEnabledFilter()   {
}
