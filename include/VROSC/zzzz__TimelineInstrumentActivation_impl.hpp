#pragma once
// IWYU pragma private; include "VROSC/TimelineInstrumentActivation.hpp"
#include "VROSC/zzzz__TimelineActivation_impl.hpp"
#include "VROSC/zzzz__TimelineInstrumentActivation_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
//  Writing Method size for method: ::VROSC::TimelineInstrumentActivation.OnActivateStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineInstrumentActivation::*)()>(&::VROSC::TimelineInstrumentActivation::OnActivateStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1771064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineInstrumentActivation.HideNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineInstrumentActivation::*)()>(&::VROSC::TimelineInstrumentActivation::HideNotes)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1771068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                        "HideNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimelineInstrumentActivation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimelineInstrumentActivation::*)()>(&::VROSC::TimelineInstrumentActivation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1771214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::TimelineInstrumentActivation::__cordl_internal_get__noteboardControlller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardControlller;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::TimelineInstrumentActivation::__cordl_internal_get__noteboardControlller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardControlller;
}
constexpr void VROSC::TimelineInstrumentActivation::__cordl_internal_set__noteboardControlller(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteboardControlller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TimelineInstrumentActivation::__cordl_internal_get__hideAllNotesAtStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAllNotesAtStart;
}
constexpr bool const& VROSC::TimelineInstrumentActivation::__cordl_internal_get__hideAllNotesAtStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAllNotesAtStart;
}
constexpr void VROSC::TimelineInstrumentActivation::__cordl_internal_set__hideAllNotesAtStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideAllNotesAtStart = value;
}
inline void VROSC::TimelineInstrumentActivation::OnActivateStart()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimelineInstrumentActivation::HideNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                        "HideNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimelineInstrumentActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimelineInstrumentActivation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TimelineInstrumentActivation* VROSC::TimelineInstrumentActivation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TimelineInstrumentActivation*>());
}
// Ctor Parameters []
constexpr ::VROSC::TimelineInstrumentActivation::TimelineInstrumentActivation()   {
}
