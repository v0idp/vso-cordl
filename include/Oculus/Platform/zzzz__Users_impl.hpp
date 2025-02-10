#pragma once
// IWYU pragma private; include "Oculus/Platform/Users.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Users_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Users.GetLoggedInUserLocale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Oculus::Platform::Users::GetLoggedInUserLocale)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x287836c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUserLocale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.Get
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)(uint64_t)>(&::Oculus::Platform::Users::Get)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2878440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetAccessToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)()>(&::Oculus::Platform::Users::GetAccessToken)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2878598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetAccessToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetBlockedUsers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* (*)()>(&::Oculus::Platform::Users::GetBlockedUsers)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x28786e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetBlockedUsers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetLoggedInUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)()>(&::Oculus::Platform::Users::GetLoggedInUser)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2878838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetLoggedInUserFriends
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)()>(&::Oculus::Platform::Users::GetLoggedInUserFriends)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2878988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUserFriends",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetOrgScopedID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* (*)(uint64_t)>(&::Oculus::Platform::Users::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2878ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetOrgScopedID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetSdkAccounts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* (*)()>(&::Oculus::Platform::Users::GetSdkAccounts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2878c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetSdkAccounts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetUserProof
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* (*)()>(&::Oculus::Platform::Users::GetUserProof)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2878d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetUserProof",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.LaunchBlockFlow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* (*)(uint64_t)>(&::Oculus::Platform::Users::LaunchBlockFlow)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2878ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchBlockFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.LaunchFriendRequestFlow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* (*)(uint64_t)>(&::Oculus::Platform::Users::LaunchFriendRequestFlow)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2879028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchFriendRequestFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.LaunchUnblockFlow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* (*)(uint64_t)>(&::Oculus::Platform::Users::LaunchUnblockFlow)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2879180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchUnblockFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetNextBlockedUserListPage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* (*)(::Oculus::Platform::Models::BlockedUserList*)>(&::Oculus::Platform::Users::GetNextBlockedUserListPage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x28792d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextBlockedUserListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::BlockedUserList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetNextUserListPage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::Models::UserList*)>(&::Oculus::Platform::Users::GetNextUserListPage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x28794b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextUserListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Users.GetNextUserCapabilityListPage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* (*)(::Oculus::Platform::Models::UserCapabilityList*)>(&::Oculus::Platform::Users::GetNextUserCapabilityListPage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2879688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextUserCapabilityListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserCapabilityList*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Oculus::Platform::Users::GetLoggedInUserLocale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUserLocale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Oculus::Platform::Users::Get(uint64_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::Users::GetAccessToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetAccessToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* Oculus::Platform::Users::GetBlockedUsers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetBlockedUsers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Oculus::Platform::Users::GetLoggedInUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* Oculus::Platform::Users::GetLoggedInUserFriends()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetLoggedInUserFriends",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* Oculus::Platform::Users::GetOrgScopedID(uint64_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetOrgScopedID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* Oculus::Platform::Users::GetSdkAccounts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetSdkAccounts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* Oculus::Platform::Users::GetUserProof()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetUserProof",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* Oculus::Platform::Users::LaunchBlockFlow(uint64_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchBlockFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* Oculus::Platform::Users::LaunchFriendRequestFlow(uint64_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchFriendRequestFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* Oculus::Platform::Users::LaunchUnblockFlow(uint64_t  userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "LaunchUnblockFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* Oculus::Platform::Users::GetNextBlockedUserListPage(::Oculus::Platform::Models::BlockedUserList*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextBlockedUserListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::BlockedUserList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>*, false>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* Oculus::Platform::Users::GetNextUserListPage(::Oculus::Platform::Models::UserList*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextUserListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>*, false>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* Oculus::Platform::Users::GetNextUserCapabilityListPage(::Oculus::Platform::Models::UserCapabilityList*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Users*>::get(),
                        "GetNextUserCapabilityListPage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserCapabilityList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Users::Users()   {
}
