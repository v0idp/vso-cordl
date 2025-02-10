#pragma once
// IWYU pragma private; include "VROSC/NoteboardTooltips.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__NoteboardTooltips_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
//  Writing Method size for method: ::VROSC::NoteboardTooltips._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteboardTooltips::*)()>(&::VROSC::NoteboardTooltips::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1735b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteboardTooltips*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoardNoteController>& VROSC::NoteboardTooltips::__cordl_internal_get__noteboardController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardController;
}
constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& VROSC::NoteboardTooltips::__cordl_internal_get__noteboardController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteboardController;
}
constexpr void VROSC::NoteboardTooltips::__cordl_internal_set__noteboardController(::UnityW<::VROSC::NoteBoardNoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteboardController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::NoteboardTooltips::__cordl_internal_get__xAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr bool const& VROSC::NoteboardTooltips::__cordl_internal_get__xAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr void VROSC::NoteboardTooltips::__cordl_internal_set__xAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xAxis = value;
}
constexpr bool& VROSC::NoteboardTooltips::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr bool const& VROSC::NoteboardTooltips::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void VROSC::NoteboardTooltips::__cordl_internal_set__yAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yAxis = value;
}
constexpr bool& VROSC::NoteboardTooltips::__cordl_internal_get__zAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zAxis;
}
constexpr bool const& VROSC::NoteboardTooltips::__cordl_internal_get__zAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zAxis;
}
constexpr void VROSC::NoteboardTooltips::__cordl_internal_set__zAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zAxis = value;
}
inline void VROSC::NoteboardTooltips::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteboardTooltips*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteboardTooltips* VROSC::NoteboardTooltips::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteboardTooltips*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteboardTooltips::NoteboardTooltips()   {
}
