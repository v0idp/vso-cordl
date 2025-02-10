#pragma once
// IWYU pragma private; include "VROSC/NoteField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Note_impl.hpp"
#include "VROSC/zzzz__NoteField_def.hpp"
#include "VROSC/zzzz__NoteNode_def.hpp"
//  Writing Method size for method: ::VROSC::NoteField.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NoteField::*)()>(&::VROSC::NoteField::get_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x171acb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteField::*)()>(&::VROSC::NoteField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171ad34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Note& VROSC::NoteField::__cordl_internal_get_EnteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr ::VROSC::Note const& VROSC::NoteField::__cordl_internal_get_EnteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr void VROSC::NoteField::__cordl_internal_set_EnteredValue(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnteredValue = value;
}
constexpr ::UnityW<::VROSC::NoteNode>& VROSC::NoteField::__cordl_internal_get_ConnectedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr ::UnityW<::VROSC::NoteNode> const& VROSC::NoteField::__cordl_internal_get_ConnectedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr void VROSC::NoteField::__cordl_internal_set_ConnectedValue(::UnityW<::VROSC::NoteNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::NoteField::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::NoteField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteField* VROSC::NoteField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteField*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteField::NoteField()   {
}
