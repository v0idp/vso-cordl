#pragma once
// IWYU pragma private; include "VROSC/SaveLoadPanelUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SaveLoadPanelUI_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::SaveLoadPanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadPanelUI::*)()>(&::VROSC::SaveLoadPanelUI::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1746774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadPanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadPanelUI::*)()>(&::VROSC::SaveLoadPanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17468a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadPanelUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadPanelUI::*)()>(&::VROSC::SaveLoadPanelUI::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1746980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadPanelUI.ToggleSongsLibraryButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadPanelUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::SaveLoadPanelUI::ToggleSongsLibraryButtonPressed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1746a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "ToggleSongsLibraryButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SaveLoadPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SaveLoadPanelUI::*)()>(&::VROSC::SaveLoadPanelUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1746a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::SaveLoadPanelUI::__cordl_internal_get__songsLibraryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songsLibraryButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::SaveLoadPanelUI::__cordl_internal_get__songsLibraryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songsLibraryButton;
}
constexpr void VROSC::SaveLoadPanelUI::__cordl_internal_set__songsLibraryButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songsLibraryButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SaveLoadPanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadPanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadPanelUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SaveLoadPanelUI::ToggleSongsLibraryButtonPressed(::VROSC::InputDevice*  inputDevice, bool  toggled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        "ToggleSongsLibraryButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, toggled);
}
inline void VROSC::SaveLoadPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SaveLoadPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SaveLoadPanelUI* VROSC::SaveLoadPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SaveLoadPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::SaveLoadPanelUI::SaveLoadPanelUI()   {
}
