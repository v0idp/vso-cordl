#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/Preconditions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/Internal/zzzz__Preconditions_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::Internal::Preconditions.CheckArgument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW)>(&::Firebase::Storage::Internal::Preconditions::CheckArgument)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x192a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::Preconditions*>::get(),
                        "CheckArgument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Storage::Internal::Preconditions::CheckArgument(bool  expression, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::Preconditions*>::get(),
                        "CheckArgument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, expression, errorMessage);
}
// Ctor Parameters []
constexpr ::Firebase::Storage::Internal::Preconditions::Preconditions()   {
}
