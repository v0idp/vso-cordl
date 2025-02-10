#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchLabel_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EnterTryFaultInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionArray_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__StrongBox_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView.GetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::*)()>(&::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cd678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::*)(::System::Linq::Expressions::Interpreter::Instruction*, ::StringW, int32_t, int32_t, int32_t)>(&::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29cd668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::GetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::_ctor(::System::Linq::Expressions::Interpreter::Instruction*  instruction, ::StringW  name, int32_t  index, int32_t  stackDepth, int32_t  continuationsDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instruction, name, index, stackDepth, continuationsDepth);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_continuationsDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_instruction", ty: "::System::Linq::Expressions::Interpreter::Instruction*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView(int32_t  _index, int32_t  _stackDepth, int32_t  _continuationsDepth, ::StringW  _name, ::System::Linq::Expressions::Interpreter::Instruction*  _instruction) noexcept  {
this->_index = _index;
this->_stackDepth = _stackDepth;
this->_continuationsDepth = _continuationsDepth;
this->_name = _name;
this->_instruction = _instruction;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView::DebugView_InstructionList_InstructionView()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList_DebugView.GetInstructionViews
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView,::Array<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>*> (*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Func_2<int32_t,int32_t>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*)>(&::System::Linq::Expressions::Interpreter::InstructionList_DebugView::GetInstructionViews)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x29c78c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList_DebugView*>::get(),
                        "GetInstructionViews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView,::Array<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>*> System::Linq::Expressions::Interpreter::InstructionList_DebugView::GetInstructionViews(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*  instructions, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*  objects, ::System::Func_2<int32_t,int32_t>*  labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  debugCookies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList_DebugView*>::get(),
                        "GetInstructionViews",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView,::Array<::System::Linq::Expressions::Interpreter::DebugView_InstructionList_InstructionView>*>, false>(nullptr, ___internal_method, instructions, objects, labelIndexer, debugCookies);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionList_DebugView::InstructionList_DebugView()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.Emit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::Instruction*)>(&::System::Linq::Expressions::Interpreter::InstructionList::Emit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c7ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "Emit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.UpdateStackDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::Instruction*)>(&::System::Linq::Expressions::Interpreter::InstructionList::UpdateStackDepth)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29c7f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "UpdateStackDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.UnEmit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::UnEmit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29c8020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "UnEmit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29c8128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_CurrentStackDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::get_CurrentStackDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c8170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_CurrentStackDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.get_CurrentContinuationsDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::get_CurrentContinuationsDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c8178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_CurrentContinuationsDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.GetInstruction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::GetInstruction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29c8180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "GetInstruction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.ToArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::InstructionArray (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::ToArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29c81d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Object*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c8504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x29c8a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Object*, ::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoad)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x29c850c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitDup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29c8b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitPop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitPop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29c8be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitPop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.SwitchToBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::SwitchToBoxed)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29c8c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "SwitchToBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c8d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalBoxed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29c8f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.LoadLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::LoadLocalBoxed)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x29c8fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "LoadLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalFromClosure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosure)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c9178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalFromClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadLocalFromClosureBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosureBoxed)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c9354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalFromClosureBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c9530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalBoxed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29c98e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.AssignLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::AssignLocalBoxed)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x29c9954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "AssignLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalBoxed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29c9b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.StoreLocalBoxed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::StoreLocalBoxed)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x29c9b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "StoreLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAssignLocalToClosure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalToClosure)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29c9d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocalToClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreLocalToClosure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalToClosure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29c9f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocalToClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitInitializeLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, ::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeLocal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29c9f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitInitializeLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitInitializeParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeParameter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ca0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitInitializeParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.Parameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::Parameter)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ca11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "Parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.ParameterBox
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::ParameterBox)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ca178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "ParameterBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.InitReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::InitReference)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ca054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "InitReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.InitImmutableRefBox
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::InitImmutableRefBox)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ca1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "InitImmutableRefBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewRuntimeVariables
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNewRuntimeVariables)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ca230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewRuntimeVariables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGetArrayItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitGetArrayItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29ca29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGetArrayItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitSetArrayItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitSetArrayItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29ca2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitSetArrayItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ca35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArrayBounds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayBounds)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29ca3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArrayBounds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNewArrayInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29ca43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArrayInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAdd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitAdd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29ca4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAdd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitSub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitSub)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29ca4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitSub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitMul
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitMul)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29ca520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitMul",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDiv
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitDiv)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDiv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitModulo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitModulo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitModulo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitExclusiveOr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitExclusiveOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitExclusiveOr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitAnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitAnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitOr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitOr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitOr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeftShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLeftShift)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ca60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRightShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitRightShift)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29ca9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNotEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNotEqual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29ca9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNotEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLessThan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29caa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLessThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLessThanOrEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLessThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29cb398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLessThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGreaterThan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29cbd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGreaterThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29cbd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGreaterThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNumericConvertChecked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, ::System::TypeCode, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertChecked)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29cbd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNumericConvertChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNumericConvertUnchecked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, ::System::TypeCode, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertUnchecked)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29cbdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNumericConvertUnchecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitConvertToUnderlying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::TypeCode, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitConvertToUnderlying)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29cbe78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitConvertToUnderlying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCast)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cbeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCastToEnum
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCastToEnum)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cbf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCastToEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCastReferenceToEnum
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCastReferenceToEnum)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cbf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCastReferenceToEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cbfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDefaultValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitDefaultValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cc00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDefaultValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::ConstructorInfo*, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNew)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29cc078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitByRefNew
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::ConstructorInfo*, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitByRefNew)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29cc0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitByRefNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCreateDelegate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::LightDelegateCreator*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCreateDelegate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cc178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCreateDelegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeEquals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeEquals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cc1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeEquals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitArrayLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitArrayLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cc244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitArrayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNegate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNegate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cc2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNegateChecked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNegateChecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cc2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNegateChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitIncrement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitIncrement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29cc2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitIncrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitDecrement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitDecrement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29cc30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDecrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeIs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeIs)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cc330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeIs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitTypeAs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitTypeAs)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29cc39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeAs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLoadField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLoadField)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29cc408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.GetLoadField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(&::System::Linq::Expressions::Interpreter::InstructionList::GetLoadField)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x29cc424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "GetLoadField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStoreField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::FieldInfo*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitStoreField)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29cc658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::MethodInfo*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCall)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29cc6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCall)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29cc774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitByRefCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitByRefCall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29cc79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitByRefCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitNullableCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitNullableCall)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29cc848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNullableCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.BuildRuntimeLabels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::BuildRuntimeLabels)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x29c8298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "BuildRuntimeLabels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MakeLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::BranchLabel* (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::MakeLabel)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29cc89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MakeLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.FixupBranch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(int32_t, int32_t)>(&::System::Linq::Expressions::Interpreter::InstructionList::FixupBranch)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x29cc9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "FixupBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EnsureLabelIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EnsureLabelIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29cca90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EnsureLabelIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MarkRuntimeLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::MarkRuntimeLabel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29ccadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MarkRuntimeLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.MarkLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::MarkLabel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ccb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MarkLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitGoto
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*, bool, bool, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitGoto)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29ccb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::OffsetInstruction*, ::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29ccbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::OffsetInstruction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ccc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*, bool, bool)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranch)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29ccc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitCoalescingBranch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitCoalescingBranch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ccd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCoalescingBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranchTrue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranchTrue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ccd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranchTrue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitBranchFalse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitBranchFalse)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ccde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranchFalse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitThrow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitThrow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cce50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitThrowVoid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitThrowVoid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cceb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitThrowVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRethrow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitRethrow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29ccf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRethrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitRethrowVoid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitRethrowVoid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29ccf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRethrowVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryFinally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFinally)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ccfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryCatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryCatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ccff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryCatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterTryFault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29cd014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterFinally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFinally)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29cd09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveFinally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFinally)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterFault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFault)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29cd180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveFault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFault)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionFilter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionFilter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveExceptionFilter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionFilter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveExceptionFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionHandlerNonVoid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerNonVoid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionHandlerNonVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitEnterExceptionHandlerVoid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerVoid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cd384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionHandlerVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitLeaveExceptionHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(bool, ::System::Linq::Expressions::Interpreter::BranchLabel*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionHandler)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29cd3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList.EmitStringSwitch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*)>(&::System::Linq::Expressions::Interpreter::InstructionList::EmitStringSwitch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29cd470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStringSwitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InstructionList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InstructionList::*)()>(&::System::Linq::Expressions::Interpreter::InstructionList::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29cd4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__instructions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__instructions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__instructions(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instructions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__objects(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentStackDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentStackDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__currentStackDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStackDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxStackDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxStackDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__maxStackDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStackDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentContinuationsDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentContinuationsDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__currentContinuationsDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentContinuationsDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__currentContinuationsDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentContinuationsDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxContinuationDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxContinuationDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__maxContinuationDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxContinuationDepth;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__maxContinuationDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxContinuationDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__runtimeLabelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeLabelCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__runtimeLabelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeLabelCount;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__runtimeLabelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runtimeLabelCount = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__labels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labels;
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__labels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labels;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__labels(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__debugCookies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCookies;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>* const& System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_get__debugCookies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugCookies;
}
constexpr void System::Linq::Expressions::Interpreter::InstructionList::__cordl_internal_set__debugCookies(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugCookies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_null(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_null()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_true(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_true", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_true()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_true", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_false(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_false", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_false()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_false", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_Ints(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_Ints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_Ints()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_Ints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadObjectCached(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadObjectCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadObjectCached()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadObjectCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocal()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalBoxed()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalFromClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalFromClosure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalFromClosure()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalFromClosure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadLocalFromClosureBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalFromClosureBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadLocalFromClosureBoxed()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_loadLocalFromClosureBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocal()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_storeLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_storeLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_storeLocal()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_storeLocal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocalBoxed()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_storeLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_storeLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_storeLocalBoxed()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_storeLocalBoxed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_assignLocalToClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocalToClosure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_assignLocalToClosure()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>, "s_assignLocalToClosure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_loadFields(::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*, "s_loadFields", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>* System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_loadFields()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*, "s_loadFields", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::setStaticF_s_emptyRuntimeLabels(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>, "s_emptyRuntimeLabels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> System::Linq::Expressions::Interpreter::InstructionList::getStaticF_s_emptyRuntimeLabels()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>, "s_emptyRuntimeLabels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get>();
}
inline void System::Linq::Expressions::Interpreter::InstructionList::Emit(::System::Linq::Expressions::Interpreter::Instruction*  instruction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "Emit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instruction);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction*  instruction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "UpdateStackDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Instruction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instruction);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::UnEmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "UnEmit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_CurrentStackDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_CurrentStackDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::get_CurrentContinuationsDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "get_CurrentContinuationsDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::GetInstruction(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "GetInstruction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::InstructionArray System::Linq::Expressions::Interpreter::InstructionList::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::InstructionArray, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoad(::System::Object*  value, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitPop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitPop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::SwitchToBoxed(int32_t  index, int32_t  instructionIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "SwitchToBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, instructionIndex);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::LoadLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "LoadLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosure(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalFromClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadLocalFromClosureBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadLocalFromClosureBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::AssignLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "AssignLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::StoreLocalBoxed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "StoreLocalBoxed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAssignLocalToClosure(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAssignLocalToClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreLocalToClosure(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreLocalToClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeLocal(int32_t  index, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitInitializeLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitInitializeParameter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitInitializeParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::Parameter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "Parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::ParameterBox(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "ParameterBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::InitReference(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "InitReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::InitImmutableRefBox(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "InitImmutableRefBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewRuntimeVariables(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewRuntimeVariables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGetArrayItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGetArrayItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitSetArrayItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitSetArrayItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArray(::System::Type*  elementType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayBounds(::System::Type*  elementType, int32_t  rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArrayBounds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType, rank);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNewArrayInit(::System::Type*  elementType, int32_t  elementCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNewArrayInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType, elementCount);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAdd(::System::Type*  type, bool  checked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAdd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitSub(::System::Type*  type, bool  checked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitSub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitMul(::System::Type*  type, bool  checked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitMul",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, checked);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDiv(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDiv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitModulo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitModulo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitExclusiveOr(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitExclusiveOr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitAnd(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitAnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitOr(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitOr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeftShift(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRightShift(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEqual(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNotEqual(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNotEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLessThan(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLessThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLessThanOrEqual(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLessThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThan(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGreaterThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGreaterThanOrEqual(::System::Type*  type, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGreaterThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertChecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNumericConvertChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNumericConvertUnchecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNumericConvertUnchecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitConvertToUnderlying(::System::TypeCode  to, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitConvertToUnderlying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, to, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCast(::System::Type*  toType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCastToEnum(::System::Type*  toType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCastToEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCastReferenceToEnum(::System::Type*  toType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCastReferenceToEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toType);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNot(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDefaultValue(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDefaultValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructorInfo, parameters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitByRefNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>  updaters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitByRefNew",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructorInfo, parameters, updaters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator*  creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCreateDelegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creator);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeEquals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeEquals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitArrayLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitArrayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNegate(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNegateChecked(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNegateChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitIncrement(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitIncrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitDecrement(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitDecrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeIs(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeIs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitTypeAs(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitTypeAs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLoadField(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLoadField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::InstructionList::GetLoadField(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "GetLoadField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, field);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStoreField(::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStoreField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, field);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCall(::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, parameters);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitByRefCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>  byrefArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitByRefCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, parameters, byrefArgs);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitNullableCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitNullableCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, parameters);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> System::Linq::Expressions::Interpreter::InstructionList::BuildRuntimeLabels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "BuildRuntimeLabels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::BranchLabel* System::Linq::Expressions::Interpreter::InstructionList::MakeLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MakeLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::BranchLabel*, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::FixupBranch(int32_t  branchIndex, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "FixupBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, branchIndex, offset);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel*  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EnsureLabelIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, label);
}
inline int32_t System::Linq::Expressions::Interpreter::InstructionList::MarkRuntimeLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MarkRuntimeLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel*  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "MarkLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue, bool  labelTargetGetsValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitGoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, hasResult, hasValue, labelTargetGetsValue);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction*  instruction, ::System::Linq::Expressions::Interpreter::BranchLabel*  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::OffsetInstruction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instruction, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, hasResult, hasValue);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  leftNotNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitCoalescingBranch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leftNotNull);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranchTrue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elseLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitBranchFalse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elseLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitThrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitThrowVoid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitThrowVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRethrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRethrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitRethrowVoid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitRethrowVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finallyStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryCatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryCatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* System::Linq::Expressions::Interpreter::InstructionList::EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel*  tryEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterTryFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction*, false>(this, ___internal_method, tryEnd);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finallyStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFinally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveFinally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel*  faultStartLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, faultStartLabel);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveFault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveFault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveExceptionFilter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerNonVoid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionHandlerNonVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitEnterExceptionHandlerVoid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitEnterExceptionHandlerVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitLeaveExceptionHandler(bool  hasValue, ::System::Linq::Expressions::Interpreter::BranchLabel*  tryExpressionEndLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitLeaveExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::BranchLabel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasValue, tryExpressionEndLabel);
}
template<typename T>
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitIntSwitch(::System::Collections::Generic::Dictionary_2<T,int32_t>*  cases)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                    "EmitIntSwitch",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<T,int32_t>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cases);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  cases, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*  nullCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        "EmitStringSwitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::StrongBox_1<int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cases, nullCase);
}
inline void System::Linq::Expressions::Interpreter::InstructionList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InstructionList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::InstructionList* System::Linq::Expressions::Interpreter::InstructionList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::InstructionList*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InstructionList::InstructionList()   {
}
