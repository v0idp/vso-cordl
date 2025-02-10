#pragma once
// IWYU pragma private; include "VROSC/SignalToMover.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__SignalToMover_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
//  Writing Method size for method: ::VROSC::SignalToMover.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalToMover::*)(::VROSC::Signal*)>(&::VROSC::SignalToMover::NodeBegin)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1720488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SignalToMover.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalToMover::*)(::VROSC::Signal*)>(&::VROSC::SignalToMover::NodeEnd)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x172054c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SignalToMover._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalToMover::*)()>(&::VROSC::SignalToMover::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172060c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::TransformMover>& VROSC::SignalToMover::__cordl_internal_get_transformMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformMover;
}
constexpr ::UnityW<::VROSC::TransformMover> const& VROSC::SignalToMover::__cordl_internal_get_transformMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformMover;
}
constexpr void VROSC::SignalToMover::__cordl_internal_set_transformMover(::UnityW<::VROSC::TransformMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transformMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SignalToMover::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SignalToMover::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SignalToMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalToMover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SignalToMover* VROSC::SignalToMover::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SignalToMover*>());
}
// Ctor Parameters []
constexpr ::VROSC::SignalToMover::SignalToMover()   {
}
