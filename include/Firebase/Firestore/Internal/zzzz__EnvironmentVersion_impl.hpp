#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/EnvironmentVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Internal/zzzz__EnvironmentVersion_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Internal::EnvironmentVersion.GetEnvironmentVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Firebase::Firestore::Internal::EnvironmentVersion::GetEnvironmentVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x190e0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::EnvironmentVersion*>::get(),
                        "GetEnvironmentVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Internal::EnvironmentVersion.FormatVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Version*)>(&::Firebase::Firestore::Internal::EnvironmentVersion::FormatVersion)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x190e114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::EnvironmentVersion*>::get(),
                        "FormatVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Firebase::Firestore::Internal::EnvironmentVersion::GetEnvironmentVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::EnvironmentVersion*>::get(),
                        "GetEnvironmentVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Firebase::Firestore::Internal::EnvironmentVersion::FormatVersion(::System::Version*  version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::EnvironmentVersion*>::get(),
                        "FormatVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, version);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Internal::EnvironmentVersion::EnvironmentVersion()   {
}
