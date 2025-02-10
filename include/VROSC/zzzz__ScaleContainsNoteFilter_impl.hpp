#pragma once
// IWYU pragma private; include "VROSC/ScaleContainsNoteFilter.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__ScaleContainsNoteFilter_def.hpp"
#include "VROSC/zzzz__NoteField_def.hpp"
#include "VROSC/zzzz__ScaleNode_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::ScaleContainsNoteFilter.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleContainsNoteFilter::*)(::VROSC::Signal*)>(&::VROSC::ScaleContainsNoteFilter::FilterSignal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x172199c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleContainsNoteFilter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleContainsNoteFilter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleContainsNoteFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleContainsNoteFilter::*)()>(&::VROSC::ScaleContainsNoteFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17219f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleContainsNoteFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ScaleNode>& VROSC::ScaleContainsNoteFilter::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr ::UnityW<::VROSC::ScaleNode> const& VROSC::ScaleContainsNoteFilter::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void VROSC::ScaleContainsNoteFilter::__cordl_internal_set__scale(::UnityW<::VROSC::ScaleNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteField*& VROSC::ScaleContainsNoteFilter::__cordl_internal_get__note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr ::VROSC::NoteField* const& VROSC::ScaleContainsNoteFilter::__cordl_internal_get__note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr void VROSC::ScaleContainsNoteFilter::__cordl_internal_set__note(::VROSC::NoteField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____note)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ScaleContainsNoteFilter::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleContainsNoteFilter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ScaleContainsNoteFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleContainsNoteFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScaleContainsNoteFilter* VROSC::ScaleContainsNoteFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScaleContainsNoteFilter*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScaleContainsNoteFilter::ScaleContainsNoteFilter()   {
}
