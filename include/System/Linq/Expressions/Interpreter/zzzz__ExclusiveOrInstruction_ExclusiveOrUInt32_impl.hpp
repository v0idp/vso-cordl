#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_ExclusiveOrUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::Run)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c3a6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::*)()>(&::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c3b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32* GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrUInt32::ExclusiveOrInstruction_ExclusiveOrUInt32()   {
}
