#pragma once
// IWYU pragma private; include "UnityEngine/ThreadAndSerializationSafeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ThreadAndSerializationSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ThreadAndSerializationSafeAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ThreadAndSerializationSafeAttribute::*)()>(&::UnityEngine::ThreadAndSerializationSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fccd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ThreadAndSerializationSafeAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ThreadAndSerializationSafeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ThreadAndSerializationSafeAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ThreadAndSerializationSafeAttribute* UnityEngine::ThreadAndSerializationSafeAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ThreadAndSerializationSafeAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ThreadAndSerializationSafeAttribute::ThreadAndSerializationSafeAttribute()   {
}
