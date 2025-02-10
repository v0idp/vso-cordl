#pragma once
// IWYU pragma private; include "VROSC/ScalePanelUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ScalePanelUI_def.hpp"
#include "VROSC/zzzz__AnimatedPanel_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__ScalePreset_def.hpp"
#include "VROSC/zzzz__ScaleRowUI_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
//  Writing Method size for method: ::VROSC::ScalePanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)()>(&::VROSC::ScalePanelUI::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1799070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)(::VROSC::SynthController*)>(&::VROSC::ScalePanelUI::Setup)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1799188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)(bool, bool)>(&::VROSC::ScalePanelUI::SetActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x179934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)()>(&::VROSC::ScalePanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1799418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI.RowNotesUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)(int32_t, ::VROSC::Scale)>(&::VROSC::ScalePanelUI::RowNotesUpdated)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1799530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "RowNotesUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI.GlobalScaleChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)(::VROSC::ScalePreset*, ::VROSC::Note)>(&::VROSC::ScalePanelUI::GlobalScaleChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1799570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "GlobalScaleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScalePanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScalePanelUI::*)()>(&::VROSC::ScalePanelUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17995e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>& VROSC::ScalePanelUI::__cordl_internal_get__scaleRows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleRows;
}
constexpr ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*> const& VROSC::ScalePanelUI::__cordl_internal_get__scaleRows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleRows;
}
constexpr void VROSC::ScalePanelUI::__cordl_internal_set__scaleRows(::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleRows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AnimatedPanel>& VROSC::ScalePanelUI::__cordl_internal_get__animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr ::UnityW<::VROSC::AnimatedPanel> const& VROSC::ScalePanelUI::__cordl_internal_get__animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr void VROSC::ScalePanelUI::__cordl_internal_set__animation(::UnityW<::VROSC::AnimatedPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SynthController>& VROSC::ScalePanelUI::__cordl_internal_get__instrumentController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr ::UnityW<::VROSC::SynthController> const& VROSC::ScalePanelUI::__cordl_internal_get__instrumentController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr void VROSC::ScalePanelUI::__cordl_internal_set__instrumentController(::UnityW<::VROSC::SynthController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrumentController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ScalePanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScalePanelUI::Setup(::VROSC::SynthController*  instrumentController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentController);
}
inline void VROSC::ScalePanelUI::SetActive(bool  shouldBeOpen, bool  animate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeOpen, animate);
}
inline void VROSC::ScalePanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScalePanelUI::RowNotesUpdated(int32_t  axis, ::VROSC::Scale  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "RowNotesUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis, scale);
}
inline void VROSC::ScalePanelUI::GlobalScaleChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        "GlobalScaleChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scalePreset, key);
}
inline void VROSC::ScalePanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScalePanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScalePanelUI* VROSC::ScalePanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScalePanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScalePanelUI::ScalePanelUI()   {
}
