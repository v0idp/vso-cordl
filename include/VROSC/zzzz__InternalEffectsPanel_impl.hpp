#pragma once
// IWYU pragma private; include "VROSC/InternalEffectsPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__InternalEffectsPanel_def.hpp"
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
//  Writing Method size for method: ::VROSC::InternalEffectsPanel.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalEffectsPanel::*)(::VROSC::SynthController*)>(&::VROSC::InternalEffectsPanel::Setup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x178aa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalEffectsPanel.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalEffectsPanel::*)()>(&::VROSC::InternalEffectsPanel::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x178ad04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalEffectsPanel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalEffectsPanel::*)()>(&::VROSC::InternalEffectsPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x178dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>& VROSC::InternalEffectsPanel::__cordl_internal_get__effectsUIs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectsUIs;
}
constexpr ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*> const& VROSC::InternalEffectsPanel::__cordl_internal_get__effectsUIs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectsUIs;
}
constexpr void VROSC::InternalEffectsPanel::__cordl_internal_set__effectsUIs(::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectsUIs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InternalEffectsPanel::Setup(::VROSC::SynthController*  instrument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument);
}
inline void VROSC::InternalEffectsPanel::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalEffectsPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalEffectsPanel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InternalEffectsPanel* VROSC::InternalEffectsPanel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InternalEffectsPanel*>());
}
// Ctor Parameters []
constexpr ::VROSC::InternalEffectsPanel::InternalEffectsPanel()   {
}
