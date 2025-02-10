#pragma once
// IWYU pragma private; include "VROSC/MySessionsPanelUI.hpp"
#include "VROSC/zzzz__SessionsPanelUI_impl.hpp"
#include "VROSC/zzzz__MySessionsPanelUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__SessionUIData_def.hpp"
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.Refresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::Refresh)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x174d204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x174d52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.UserLoggedIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::UserLoggedIn)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x174d61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "UserLoggedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.UserLoggedOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::UserLoggedOut)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x174d7bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.CloudSessionsDataLoadSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*)>(&::VROSC::MySessionsPanelUI::CloudSessionsDataLoadSucceeded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x174d4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "CloudSessionsDataLoadSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI.CloudSessionsDataLoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)(::VROSC::Error)>(&::VROSC::MySessionsPanelUI::CloudSessionsDataLoadFailed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x174d82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "CloudSessionsDataLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x174d8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI._Refresh_b__0_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::_Refresh_b__0_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x174d8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "<Refresh>b__0_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MySessionsPanelUI._UserLoggedIn_b__2_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MySessionsPanelUI::*)()>(&::VROSC::MySessionsPanelUI::_UserLoggedIn_b__2_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x174d934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "<UserLoggedIn>b__2_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MySessionsPanelUI::Refresh()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::UserLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "UserLoggedIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::UserLoggedOut()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::CloudSessionsDataLoadSucceeded(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionUIDatas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "CloudSessionsDataLoadSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionUIDatas);
}
inline void VROSC::MySessionsPanelUI::CloudSessionsDataLoadFailed(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "CloudSessionsDataLoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::MySessionsPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::_Refresh_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "<Refresh>b__0_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MySessionsPanelUI::_UserLoggedIn_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MySessionsPanelUI*>::get(),
                        "<UserLoggedIn>b__2_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MySessionsPanelUI* VROSC::MySessionsPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MySessionsPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::MySessionsPanelUI::MySessionsPanelUI()   {
}
