#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubOvfInstruction_SubOvfUInt64.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubOvfInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubOvfInstruction_SubOvfUInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubOvfInstruction_SubOvfUInt64.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SubOvfInstruction_SubOvfUInt64::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::SubOvfInstruction_SubOvfUInt64::Run)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x29f17cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubOvfInstruction_SubOvfUInt64._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SubOvfInstruction_SubOvfUInt64::*)()>(&::GlobalNamespace::SubOvfInstruction_SubOvfUInt64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f0d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::SubOvfInstruction_SubOvfUInt64::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::SubOvfInstruction_SubOvfUInt64::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SubOvfInstruction_SubOvfUInt64* GlobalNamespace::SubOvfInstruction_SubOvfUInt64::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SubOvfInstruction_SubOvfUInt64*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubOvfInstruction_SubOvfUInt64::SubOvfInstruction_SubOvfUInt64()   {
}
