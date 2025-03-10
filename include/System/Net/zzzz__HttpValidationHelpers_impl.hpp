#pragma once
// IWYU pragma private; include "System/Net/HttpValidationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::HttpValidationHelpers.CheckBadHeaderValueChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpValidationHelpers::CheckBadHeaderValueChars)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2d5000c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(),
                        "CheckBadHeaderValueChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpValidationHelpers.IsInvalidMethodOrHeaderString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d501f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(),
                        "IsInvalidMethodOrHeaderString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::HttpValidationHelpers::setStaticF_s_httpTrimCharacters(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "s_httpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Net::HttpValidationHelpers::getStaticF_s_httpTrimCharacters()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "s_httpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get>();
}
inline ::StringW System::Net::HttpValidationHelpers::CheckBadHeaderValueChars(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(),
                        "CheckBadHeaderValueChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline bool System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(),
                        "IsInvalidMethodOrHeaderString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringValue);
}
// Ctor Parameters []
constexpr ::System::Net::HttpValidationHelpers::HttpValidationHelpers()   {
}
