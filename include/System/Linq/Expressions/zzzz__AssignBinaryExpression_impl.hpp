#pragma once
// IWYU pragma private; include "System/Linq/Expressions/AssignBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__AssignBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::AssignBinaryExpression::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::AssignBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29907fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::AssignBinaryExpression::*)()>(&::System::Linq::Expressions::AssignBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2990800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression.get_NodeType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::AssignBinaryExpression::*)()>(&::System::Linq::Expressions::AssignBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2990820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        "get_NodeType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::AssignBinaryExpression::_ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, left, right);
}
inline ::System::Type* System::Linq::Expressions::AssignBinaryExpression::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::AssignBinaryExpression::get_NodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::AssignBinaryExpression*>::get(),
                        "get_NodeType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::AssignBinaryExpression* System::Linq::Expressions::AssignBinaryExpression::New_ctor(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::AssignBinaryExpression*>(left, right));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::AssignBinaryExpression::AssignBinaryExpression()   {
}
