#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Enums.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Internal/zzzz__Enums_def.hpp"
#include "Firebase/Firestore/zzzz__SourceProxy_def.hpp"
#include "Firebase/Firestore/zzzz__Source_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Internal::Enums.Convert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SourceProxy (*)(::Firebase::Firestore::Source)>(&::Firebase::Firestore::Internal::Enums::Convert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x190e028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Enums*>::get(),
                        "Convert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Firebase::Firestore::SourceProxy Firebase::Firestore::Internal::Enums::Convert(::Firebase::Firestore::Source  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Enums*>::get(),
                        "Convert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SourceProxy, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Internal::Enums::Enums()   {
}
