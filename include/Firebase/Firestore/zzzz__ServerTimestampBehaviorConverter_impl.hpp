#pragma once
// IWYU pragma private; include "Firebase/Firestore/ServerTimestampBehaviorConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ServerTimestampBehaviorConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__ServerTimestampBehavior_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::ServerTimestampBehaviorConverter.ConvertToProxy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior (*)(::Firebase::Firestore::ServerTimestampBehavior)>(&::Firebase::Firestore::ServerTimestampBehaviorConverter::ConvertToProxy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1919420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ServerTimestampBehaviorConverter*>::get(),
                        "ConvertToProxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior Firebase::Firestore::ServerTimestampBehaviorConverter::ConvertToProxy(::Firebase::Firestore::ServerTimestampBehavior  stb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ServerTimestampBehaviorConverter*>::get(),
                        "ConvertToProxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior, false>(nullptr, ___internal_method, stb);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ServerTimestampBehaviorConverter::ServerTimestampBehaviorConverter()   {
}
