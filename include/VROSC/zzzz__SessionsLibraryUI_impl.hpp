#pragma once
// IWYU pragma private; include "VROSC/SessionsLibraryUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SessionsLibraryUI_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/UI/zzzz__TabButton_def.hpp"
#include "VROSC/UI/zzzz__TabController_def.hpp"
#include "VROSC/zzzz__CommunitySessionsPanelUI_def.hpp"
#include "VROSC/zzzz__ConfirmationUIPopup_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__ExportSessionUIPopup_def.hpp"
#include "VROSC/zzzz__FavoritesSessionsPanelUI_def.hpp"
#include "VROSC/zzzz__LoadSessionUIPopup_def.hpp"
#include "VROSC/zzzz__LoginUIPopup_def.hpp"
#include "VROSC/zzzz__MySessionsPanelUI_def.hpp"
#include "VROSC/zzzz__MySharedSessionsPanelUI_def.hpp"
#include "VROSC/zzzz__PreviewOptionsUI_def.hpp"
#include "VROSC/zzzz__SaveSessionUIPopup_def.hpp"
#include "VROSC/zzzz__SessionInfoPopup_def.hpp"
#include "VROSC/zzzz__SessionItemData_def.hpp"
#include "VROSC/zzzz__SessionSaveData_def.hpp"
#include "VROSC/zzzz__SessionsLibraryUI_def.hpp"
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
#include "VROSC/zzzz__SessionsSearchBar_def.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UserProfilePopup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionsLibraryUI_State::SessionsLibraryUI_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionsLibraryUI_State::SessionsLibraryUI_State()   {
}
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::Main{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::Saving{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::Loading{static_cast<int32_t>(0x2)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::Confirmation{static_cast<int32_t>(0x3)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::WaitingForValidation{static_cast<int32_t>(0x4)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::LoggingIn{static_cast<int32_t>(0x5)};
constexpr ::VROSC::SessionsLibraryUI_State  VROSC::SessionsLibraryUI_State::Exporting{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI___c__DisplayClass62_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI___c__DisplayClass62_0::*)()>(&::VROSC::SessionsLibraryUI___c__DisplayClass62_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1760d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI___c__DisplayClass62_0._SaveSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI___c__DisplayClass62_0::*)()>(&::VROSC::SessionsLibraryUI___c__DisplayClass62_0::_SaveSession_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1763314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        "<SaveSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI___c__DisplayClass62_0._SaveSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI___c__DisplayClass62_0::*)(::VROSC::Error)>(&::VROSC::SessionsLibraryUI___c__DisplayClass62_0::_SaveSession_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1763338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        "<SaveSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SessionsLibraryUI>& VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::SessionsLibraryUI> const& VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_set___4__this(::UnityW<::VROSC::SessionsLibraryUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionSaveData*& VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_get_sessionSaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionSaveData;
}
constexpr ::VROSC::SessionSaveData* const& VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_get_sessionSaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionSaveData;
}
constexpr void VROSC::SessionsLibraryUI___c__DisplayClass62_0::__cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionsLibraryUI___c__DisplayClass62_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI___c__DisplayClass62_0::_SaveSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        "<SaveSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI___c__DisplayClass62_0::_SaveSession_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>::get(),
                        "<SaveSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SessionsLibraryUI___c__DisplayClass62_0* VROSC::SessionsLibraryUI___c__DisplayClass62_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsLibraryUI___c__DisplayClass62_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsLibraryUI___c__DisplayClass62_0::SessionsLibraryUI___c__DisplayClass62_0()   {
}
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::Awake)> {
  constexpr static std::size_t size = 0xc18;
  constexpr static std::size_t addrs = 0x175ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::OnEnable)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x175da28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ForceUpdateDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ForceUpdateDataLoaded)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x175dcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ForceUpdateDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OpenUpdateNoticeWindow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::OpenUpdateNoticeWindow)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x175e24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenUpdateNoticeWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ContinueWithoutUpdating
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ContinueWithoutUpdating)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x175e284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ContinueWithoutUpdating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OpenMainWindow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::OpenMainWindow)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x175dd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenMainWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::OnDisable)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x175ea5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::OnDestroy)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x175ed44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetButtonsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetButtonsActive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x175f690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetButtonsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetSelectedSessionButtonsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetSelectedSessionButtonsActive)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x175f75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetSelectedSessionButtonsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.TabChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::UI::TabButton*)>(&::VROSC::SessionsLibraryUI::TabChanged)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x175e4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "TabChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::TabButton*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ShowChangeEmailPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ShowChangeEmailPopup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175918c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ShowChangeEmailPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ShowChangePasswordPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ShowChangePasswordPopup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17591b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ShowChangePasswordPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.Refresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::Refresh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x175f988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "Refresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OrderingChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::SessionsSearchHelper_OrderingType)>(&::VROSC::SessionsLibraryUI::OrderingChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x175f9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OrderingChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_OrderingType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.FilteringChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::SessionsSearchHelper_FilteringType)>(&::VROSC::SessionsLibraryUI::FilteringChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x175fa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "FilteringChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_FilteringType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SearchChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::SearchChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x175fa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SearchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ItemSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::SessionItemData*)>(&::VROSC::SessionsLibraryUI::ItemSelected)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x175fa40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ItemSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.DeselectItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::DeselectItem)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x175f844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeselectItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ProfileButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ProfileButtonPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x175fac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ProfileButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.CloseButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::CloseButtonPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x175fb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.NewSessionButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::NewSessionButtonPressed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x175fba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "NewSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::SaveSessionButtonPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x175fe38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ExportSessionButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ExportSessionButtonPressed)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1760070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ExportSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.LoadSessionButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::LoadSessionButtonPressed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1760440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.DeleteSessionButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::DeleteSessionButtonPressed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1760500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::SessionSaveData*, bool)>(&::VROSC::SessionsLibraryUI::SaveSession)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x17605c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SessionsValidated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::SessionsValidated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1760d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionsValidated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SessionDataUpdateSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::SessionDataUpdateSucceeded)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1760d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionDataUpdateSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SessionDataUpdateFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, ::VROSC::Error)>(&::VROSC::SessionsLibraryUI::SessionDataUpdateFailed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1760e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionDataUpdateFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SessionPreviewLoadSucceded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, ::UnityEngine::AudioClip*, float_t)>(&::VROSC::SessionsLibraryUI::SessionPreviewLoadSucceded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1760e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionPreviewLoadSucceded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SessionPreviewLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, ::VROSC::Error)>(&::VROSC::SessionsLibraryUI::SessionPreviewLoadFailed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1760e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionPreviewLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionCanceled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::SaveSessionCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1760ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::SaveSessionSucceeded)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x1760ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, ::VROSC::Error)>(&::VROSC::SessionsLibraryUI::SaveSessionFailed)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x1761344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionPreviewProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, bool, float_t)>(&::VROSC::SessionsLibraryUI::SaveSessionPreviewProgressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1761848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionPreviewProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SaveSessionProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, float_t)>(&::VROSC::SessionsLibraryUI::SaveSessionProgressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1761868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.UploadSessionProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, float_t)>(&::VROSC::SessionsLibraryUI::UploadSessionProgressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1761884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UploadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.UploadSessionPreviewProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, float_t)>(&::VROSC::SessionsLibraryUI::UploadSessionPreviewProgressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17618a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UploadSessionPreviewProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.LoadSessionSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, bool)>(&::VROSC::SessionsLibraryUI::LoadSessionSucceeded)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x17618bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.LoadSessionFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, bool, ::VROSC::Error)>(&::VROSC::SessionsLibraryUI::LoadSessionFailed)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x1761e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.LoadSessionProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, float_t)>(&::VROSC::SessionsLibraryUI::LoadSessionProgressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17621cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.DownloadSessionProgressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, float_t)>(&::VROSC::SessionsLibraryUI::DownloadSessionProgressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17621e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DownloadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.DeleteSessionSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::DeleteSessionSucceeded)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x1762204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.DeleteSessionFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, ::VROSC::Error)>(&::VROSC::SessionsLibraryUI::DeleteSessionFailed)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x176243c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.FilterWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::FilterWith)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1757928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "FilterWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.UpdateTemplateSessionItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW)>(&::VROSC::SessionsLibraryUI::UpdateTemplateSessionItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1757fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UpdateTemplateSessionItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetInConfirmationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool, ::VROSC::ConfirmationUIPopup_Data*, ::System::Action*, ::System::Action*)>(&::VROSC::SessionsLibraryUI::SetInConfirmationState)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x175fc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInConfirmationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ConfirmationUIPopup_Data*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetInSavingState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetInSavingState)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x175fe54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInSavingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetInExportingState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetInExportingState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x17601e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInExportingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetInLoadingState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetInLoadingState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x1761c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInLoadingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.SetIsWaitingForValidationState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(bool)>(&::VROSC::SessionsLibraryUI::SetIsWaitingForValidationState)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x175e2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetIsWaitingForValidationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OpenLoginPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::VROSC::LoginUIPopup_Panel)>(&::VROSC::SessionsLibraryUI::OpenLoginPopup)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x175f8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenLoginPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoginUIPopup_Panel>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.CloseLoginPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::CloseLoginPopup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x175f888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "CloseLoginPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.LoginPopupClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::LoginPopupClosed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1762668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoginPopupClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ClosedLoadSessionPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ClosedLoadSessionPopup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17626d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ClosedLoadSessionPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.ClosedExportSessionPopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::ClosedExportSessionPopup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17626e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ClosedExportSessionPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.UserLoggedIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)(::StringW, bool)>(&::VROSC::SessionsLibraryUI::UserLoggedIn)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17626fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UserLoggedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.UserLoggedOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::UserLoggedOut)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1762738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UserLoggedOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1762808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x176282c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._NewSessionButtonPressed_b__57_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_NewSessionButtonPressed_b__57_0)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x176283c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<NewSessionButtonPressed>b__57_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._NewSessionButtonPressed_b__57_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_NewSessionButtonPressed_b__57_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1762c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<NewSessionButtonPressed>b__57_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._LoadSessionButtonPressed_b__60_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_LoadSessionButtonPressed_b__60_0)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x1762c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<LoadSessionButtonPressed>b__60_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._LoadSessionButtonPressed_b__60_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_LoadSessionButtonPressed_b__60_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1763044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<LoadSessionButtonPressed>b__60_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._DeleteSessionButtonPressed_b__61_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_DeleteSessionButtonPressed_b__61_0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x1763088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<DeleteSessionButtonPressed>b__61_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsLibraryUI._DeleteSessionButtonPressed_b__61_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsLibraryUI::*)()>(&::VROSC::SessionsLibraryUI::_DeleteSessionButtonPressed_b__61_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17632d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<DeleteSessionButtonPressed>b__61_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoginUIPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__loginPopupUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginPopupUI;
}
constexpr ::UnityW<::VROSC::LoginUIPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__loginPopupUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginPopupUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__loginPopupUI(::UnityW<::VROSC::LoginUIPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loginPopupUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MySessionsPanelUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__mySessionsPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySessionsPanelUI;
}
constexpr ::UnityW<::VROSC::MySessionsPanelUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__mySessionsPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySessionsPanelUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__mySessionsPanelUI(::UnityW<::VROSC::MySessionsPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mySessionsPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MySharedSessionsPanelUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__mySharedSessionsPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySharedSessionsPanelUI;
}
constexpr ::UnityW<::VROSC::MySharedSessionsPanelUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__mySharedSessionsPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySharedSessionsPanelUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__mySharedSessionsPanelUI(::UnityW<::VROSC::MySharedSessionsPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mySharedSessionsPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CommunitySessionsPanelUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__communitySessionsPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communitySessionsPanelUI;
}
constexpr ::UnityW<::VROSC::CommunitySessionsPanelUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__communitySessionsPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communitySessionsPanelUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__communitySessionsPanelUI(::UnityW<::VROSC::CommunitySessionsPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____communitySessionsPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::FavoritesSessionsPanelUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__favoritesSessionsPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____favoritesSessionsPanelUI;
}
constexpr ::UnityW<::VROSC::FavoritesSessionsPanelUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__favoritesSessionsPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____favoritesSessionsPanelUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__favoritesSessionsPanelUI(::UnityW<::VROSC::FavoritesSessionsPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoritesSessionsPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::TabController>& VROSC::SessionsLibraryUI::__cordl_internal_get__tabController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabController;
}
constexpr ::UnityW<::VROSC::UI::TabController> const& VROSC::SessionsLibraryUI::__cordl_internal_get__tabController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabController;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__tabController(::UnityW<::VROSC::UI::TabController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tabController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__profileButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profileButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__profileButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profileButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__profileButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____profileButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__newSessionButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSessionButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__newSessionButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSessionButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__newSessionButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newSessionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__saveSessionButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveSessionButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__saveSessionButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveSessionButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__saveSessionButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveSessionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__exportSessionButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exportSessionButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__exportSessionButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exportSessionButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__exportSessionButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exportSessionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__loadSessionButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadSessionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__deleteSessionButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteSessionButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__deleteSessionButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteSessionButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__deleteSessionButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deleteSessionButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ConfirmationUIPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__confirmationUIPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUIPopup;
}
constexpr ::UnityW<::VROSC::ConfirmationUIPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__confirmationUIPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUIPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__confirmationUIPopup(::UnityW<::VROSC::ConfirmationUIPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____confirmationUIPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SaveSessionUIPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__saveSessionUIPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveSessionUIPopup;
}
constexpr ::UnityW<::VROSC::SaveSessionUIPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__saveSessionUIPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveSessionUIPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__saveSessionUIPopup(::UnityW<::VROSC::SaveSessionUIPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveSessionUIPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoadSessionUIPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionUIPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionUIPopup;
}
constexpr ::UnityW<::VROSC::LoadSessionUIPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionUIPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionUIPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__loadSessionUIPopup(::UnityW<::VROSC::LoadSessionUIPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadSessionUIPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ExportSessionUIPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__exportSessionUIPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exportSessionUIPopup;
}
constexpr ::UnityW<::VROSC::ExportSessionUIPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__exportSessionUIPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exportSessionUIPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__exportSessionUIPopup(::UnityW<::VROSC::ExportSessionUIPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exportSessionUIPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionsLibraryUI::__cordl_internal_get__waitingForDataValidationPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForDataValidationPopup;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionsLibraryUI::__cordl_internal_get__waitingForDataValidationPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForDataValidationPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__waitingForDataValidationPopup(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitingForDataValidationPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UserProfilePopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__userProfilePopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userProfilePopup;
}
constexpr ::UnityW<::VROSC::UserProfilePopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__userProfilePopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userProfilePopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__userProfilePopup(::UnityW<::VROSC::UserProfilePopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userProfilePopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SessionInfoPopup>& VROSC::SessionsLibraryUI::__cordl_internal_get__sessionInfoPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionInfoPopup;
}
constexpr ::UnityW<::VROSC::SessionInfoPopup> const& VROSC::SessionsLibraryUI::__cordl_internal_get__sessionInfoPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionInfoPopup;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__sessionInfoPopup(::UnityW<::VROSC::SessionInfoPopup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionInfoPopup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SessionsSearchBar>& VROSC::SessionsLibraryUI::__cordl_internal_get__searchBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchBar;
}
constexpr ::UnityW<::VROSC::SessionsSearchBar> const& VROSC::SessionsLibraryUI::__cordl_internal_get__searchBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchBar;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__searchBar(::UnityW<::VROSC::SessionsSearchBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ConfirmationUIPopup_Data*& VROSC::SessionsLibraryUI::__cordl_internal_get__newSessionConfirmationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSessionConfirmationData;
}
constexpr ::VROSC::ConfirmationUIPopup_Data* const& VROSC::SessionsLibraryUI::__cordl_internal_get__newSessionConfirmationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newSessionConfirmationData;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__newSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newSessionConfirmationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ConfirmationUIPopup_Data*& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionConfirmationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionConfirmationData;
}
constexpr ::VROSC::ConfirmationUIPopup_Data* const& VROSC::SessionsLibraryUI::__cordl_internal_get__loadSessionConfirmationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSessionConfirmationData;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__loadSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadSessionConfirmationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::ConfirmationUIPopup_Data*& VROSC::SessionsLibraryUI::__cordl_internal_get__deleteSessionConfirmationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteSessionConfirmationData;
}
constexpr ::VROSC::ConfirmationUIPopup_Data* const& VROSC::SessionsLibraryUI::__cordl_internal_get__deleteSessionConfirmationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deleteSessionConfirmationData;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__deleteSessionConfirmationData(::VROSC::ConfirmationUIPopup_Data*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deleteSessionConfirmationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PreviewOptionsUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__previewOptionsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewOptionsUI;
}
constexpr ::UnityW<::VROSC::PreviewOptionsUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__previewOptionsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewOptionsUI;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__previewOptionsUI(::UnityW<::VROSC::PreviewOptionsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewOptionsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionsLibraryUI::__cordl_internal_get__updateNoticeWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateNoticeWindow;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionsLibraryUI::__cordl_internal_get__updateNoticeWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateNoticeWindow;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__updateNoticeWindow(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateNoticeWindow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionsLibraryUI::__cordl_internal_get__mainWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainWindow;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionsLibraryUI::__cordl_internal_get__mainWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainWindow;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__mainWindow(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainWindow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionsLibraryUI::__cordl_internal_get__updateContinueButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateContinueButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionsLibraryUI::__cordl_internal_get__updateContinueButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateContinueButton;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__updateContinueButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateContinueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionsLibraryUI_State& VROSC::SessionsLibraryUI::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::VROSC::SessionsLibraryUI_State const& VROSC::SessionsLibraryUI::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__currentState(::VROSC::SessionsLibraryUI_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr bool& VROSC::SessionsLibraryUI::__cordl_internal_get__allowOnline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowOnline;
}
constexpr bool const& VROSC::SessionsLibraryUI::__cordl_internal_get__allowOnline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowOnline;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__allowOnline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowOnline = value;
}
constexpr ::UnityW<::VROSC::SessionsPanelUI>& VROSC::SessionsLibraryUI::__cordl_internal_get__currentSessionsPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSessionsPanel;
}
constexpr ::UnityW<::VROSC::SessionsPanelUI> const& VROSC::SessionsLibraryUI::__cordl_internal_get__currentSessionsPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSessionsPanel;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__currentSessionsPanel(::UnityW<::VROSC::SessionsPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSessionsPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionItemData*& VROSC::SessionsLibraryUI::__cordl_internal_get__selectedItemData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedItemData;
}
constexpr ::VROSC::SessionItemData* const& VROSC::SessionsLibraryUI::__cordl_internal_get__selectedItemData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedItemData;
}
constexpr void VROSC::SessionsLibraryUI::__cordl_internal_set__selectedItemData(::VROSC::SessionItemData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedItemData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionsLibraryUI::setStaticF_OnSaveConfirmed(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSaveConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::SessionsLibraryUI::getStaticF_OnSaveConfirmed()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSaveConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>();
}
inline void VROSC::SessionsLibraryUI::setStaticF_OnLoadConfirmed(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnLoadConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::SessionsLibraryUI::getStaticF_OnLoadConfirmed()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnLoadConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>();
}
inline void VROSC::SessionsLibraryUI::setStaticF_OnNewConfirmed(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnNewConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::SessionsLibraryUI::getStaticF_OnNewConfirmed()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnNewConfirmed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get>();
}
inline void VROSC::SessionsLibraryUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ForceUpdateDataLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ForceUpdateDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OpenUpdateNoticeWindow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenUpdateNoticeWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ContinueWithoutUpdating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ContinueWithoutUpdating",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OpenMainWindow(bool  allowOnline)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenMainWindow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowOnline);
}
inline void VROSC::SessionsLibraryUI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::SetButtonsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetButtonsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::SessionsLibraryUI::SetSelectedSessionButtonsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetSelectedSessionButtonsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::SessionsLibraryUI::TabChanged(::VROSC::UI::TabButton*  tabButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "TabChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::TabButton*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tabButton);
}
inline void VROSC::SessionsLibraryUI::ShowChangeEmailPopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ShowChangeEmailPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ShowChangePasswordPopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ShowChangePasswordPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "Refresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OrderingChanged(::VROSC::SessionsSearchHelper_OrderingType  orderingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OrderingChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_OrderingType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, orderingType);
}
inline void VROSC::SessionsLibraryUI::FilteringChanged(::VROSC::SessionsSearchHelper_FilteringType  filteringType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "FilteringChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_FilteringType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filteringType);
}
inline void VROSC::SessionsLibraryUI::SearchChanged(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SearchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::SessionsLibraryUI::ItemSelected(::VROSC::SessionItemData*  itemData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ItemSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemData);
}
inline void VROSC::SessionsLibraryUI::DeselectItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeselectItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ProfileButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ProfileButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::CloseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::NewSessionButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "NewSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::SaveSessionButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ExportSessionButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ExportSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::LoadSessionButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::DeleteSessionButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::SaveSession(::VROSC::SessionSaveData*  sessionSaveData, bool  isValidated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionSaveData, isValidated);
}
inline void VROSC::SessionsLibraryUI::SessionsValidated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionsValidated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::SessionDataUpdateSucceeded(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionDataUpdateSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsLibraryUI::SessionDataUpdateFailed(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionDataUpdateFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SessionsLibraryUI::SessionPreviewLoadSucceded(::StringW  sessionId, ::UnityEngine::AudioClip*  audioClip, float_t  previewNormalizeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionPreviewLoadSucceded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, audioClip, previewNormalizeMultiplier);
}
inline void VROSC::SessionsLibraryUI::SessionPreviewLoadFailed(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SessionPreviewLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SessionsLibraryUI::SaveSessionCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::SaveSessionSucceeded(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsLibraryUI::SaveSessionFailed(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SessionsLibraryUI::SaveSessionPreviewProgressed(::StringW  sessionId, bool  isSaving, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionPreviewProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isSaving, progress);
}
inline void VROSC::SessionsLibraryUI::SaveSessionProgressed(::StringW  sessionId, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SaveSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, progress);
}
inline void VROSC::SessionsLibraryUI::UploadSessionProgressed(::StringW  sessionId, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UploadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, progress);
}
inline void VROSC::SessionsLibraryUI::UploadSessionPreviewProgressed(::StringW  sessionId, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UploadSessionPreviewProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, progress);
}
inline void VROSC::SessionsLibraryUI::LoadSessionSucceeded(::StringW  sessionId, bool  isDefaultSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isDefaultSession);
}
inline void VROSC::SessionsLibraryUI::LoadSessionFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isDefaultSession, error);
}
inline void VROSC::SessionsLibraryUI::LoadSessionProgressed(::StringW  sessionId, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, progress);
}
inline void VROSC::SessionsLibraryUI::DownloadSessionProgressed(::StringW  sessionId, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DownloadSessionProgressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, progress);
}
inline void VROSC::SessionsLibraryUI::DeleteSessionSucceeded(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsLibraryUI::DeleteSessionFailed(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "DeleteSessionFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::SessionsLibraryUI::FilterWith(::StringW  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "FilterWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter);
}
inline void VROSC::SessionsLibraryUI::UpdateTemplateSessionItem(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UpdateTemplateSessionItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsLibraryUI::SetInConfirmationState(bool  isInConfirmationState, ::VROSC::ConfirmationUIPopup_Data*  data, ::System::Action*  confirmCallback, ::System::Action*  cancelCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInConfirmationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ConfirmationUIPopup_Data*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isInConfirmationState, data, confirmCallback, cancelCallback);
}
inline void VROSC::SessionsLibraryUI::SetInSavingState(bool  isInSavingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInSavingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isInSavingState);
}
inline void VROSC::SessionsLibraryUI::SetInExportingState(bool  isInExportingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInExportingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isInExportingState);
}
inline void VROSC::SessionsLibraryUI::SetInLoadingState(bool  isInLoadingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetInLoadingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isInLoadingState);
}
inline void VROSC::SessionsLibraryUI::SetIsWaitingForValidationState(bool  isWaiting)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "SetIsWaitingForValidationState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isWaiting);
}
inline void VROSC::SessionsLibraryUI::OpenLoginPopup(::VROSC::LoginUIPopup_Panel  panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OpenLoginPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoginUIPopup_Panel>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void VROSC::SessionsLibraryUI::CloseLoginPopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "CloseLoginPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::LoginPopupClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "LoginPopupClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ClosedLoadSessionPopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ClosedLoadSessionPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::ClosedExportSessionPopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "ClosedExportSessionPopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::UserLoggedIn(::StringW  email, bool  isVerified)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UserLoggedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, isVerified);
}
inline void VROSC::SessionsLibraryUI::UserLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "UserLoggedOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_NewSessionButtonPressed_b__57_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<NewSessionButtonPressed>b__57_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_NewSessionButtonPressed_b__57_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<NewSessionButtonPressed>b__57_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_LoadSessionButtonPressed_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<LoadSessionButtonPressed>b__60_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_LoadSessionButtonPressed_b__60_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<LoadSessionButtonPressed>b__60_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_DeleteSessionButtonPressed_b__61_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<DeleteSessionButtonPressed>b__61_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsLibraryUI::_DeleteSessionButtonPressed_b__61_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsLibraryUI*>::get(),
                        "<DeleteSessionButtonPressed>b__61_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionsLibraryUI* VROSC::SessionsLibraryUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsLibraryUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsLibraryUI::SessionsLibraryUI()   {
}
