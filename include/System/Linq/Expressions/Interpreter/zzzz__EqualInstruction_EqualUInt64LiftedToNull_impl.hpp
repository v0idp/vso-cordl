#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualUInt64LiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualUInt64LiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::Run)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x29c2ba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::*)()>(&::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c1814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull* GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualInstruction_EqualUInt64LiftedToNull::EqualInstruction_EqualUInt64LiftedToNull()   {
}
