#pragma once
// IWYU pragma private; include "VROSC/ScalePresets.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__Note_impl.hpp"
#include "VROSC/zzzz__ScalePresets_def.hpp"
#include "VROSC/zzzz__ScalePreset_def.hpp"
//  Writing Method size for method: ::VROSC::ScalePresets.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePresets::*)()>(&::VROSC::ScalePresets::OnValidate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16f77a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePresets*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePresets._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePresets::*)()>(&::VROSC::ScalePresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f7800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePresets*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::ScalePresets::__cordl_internal_get_SelectedScaleIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedScaleIndex;
}
constexpr int32_t const& VROSC::ScalePresets::__cordl_internal_get_SelectedScaleIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedScaleIndex;
}
constexpr void VROSC::ScalePresets::__cordl_internal_set_SelectedScaleIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedScaleIndex = value;
}
constexpr ::VROSC::Note& VROSC::ScalePresets::__cordl_internal_get_SelectedStartNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedStartNote;
}
constexpr ::VROSC::Note const& VROSC::ScalePresets::__cordl_internal_get_SelectedStartNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedStartNote;
}
constexpr void VROSC::ScalePresets::__cordl_internal_set_SelectedStartNote(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedStartNote = value;
}
constexpr ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>& VROSC::ScalePresets::__cordl_internal_get_Presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Presets;
}
constexpr ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*> const& VROSC::ScalePresets::__cordl_internal_get_Presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Presets;
}
constexpr void VROSC::ScalePresets::__cordl_internal_set_Presets(::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Presets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ScalePresets::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePresets*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScalePresets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePresets*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScalePresets* VROSC::ScalePresets::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScalePresets*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScalePresets::ScalePresets()   {
}
