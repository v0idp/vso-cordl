#pragma once
// IWYU pragma private; include "System/ContextBoundObject.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
//  Writing Method size for method: ::System::ContextBoundObject._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ContextBoundObject::*)()>(&::System::ContextBoundObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2772d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ContextBoundObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::ContextBoundObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ContextBoundObject*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ContextBoundObject* System::ContextBoundObject::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ContextBoundObject*>());
}
// Ctor Parameters []
constexpr ::System::ContextBoundObject::ContextBoundObject()   {
}
