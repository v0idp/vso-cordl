#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualDoubleLiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualDoubleLiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::Run)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29c2d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::*)()>(&::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c1824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull* GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualInstruction_EqualDoubleLiftedToNull::EqualInstruction_EqualDoubleLiftedToNull()   {
}
