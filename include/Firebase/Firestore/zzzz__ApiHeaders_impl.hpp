#pragma once
// IWYU pragma private; include "Firebase/Firestore/ApiHeaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ApiHeaders_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::ApiHeaders.SetClientLanguage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Firebase::Firestore::ApiHeaders::SetClientLanguage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x19056e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ApiHeaders*>::get(),
                        "SetClientLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::ApiHeaders::SetClientLanguage(::StringW  languageToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ApiHeaders*>::get(),
                        "SetClientLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, languageToken);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ApiHeaders::ApiHeaders()   {
}
