#pragma once
// IWYU pragma private; include "Unity/Properties/Property_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__IAttributes_impl.hpp"
#include "Unity/Properties/zzzz__IProperty_1_impl.hpp"
#include "Unity/Properties/zzzz__IProperty_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TContainer,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Attribute*>*& Unity::Properties::Property_2<TContainer,TValue>::__cordl_internal_get_m_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Attributes;
}
template<typename TContainer,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Attribute*>* const& Unity::Properties::Property_2<TContainer,TValue>::__cordl_internal_get_m_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Attributes;
}
template<typename TContainer,typename TValue>
constexpr void Unity::Properties::Property_2<TContainer,TValue>::__cordl_internal_set_m_Attributes(::System::Collections::Generic::List_1<::System::Attribute*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Attributes, value);
}
template<typename TContainer,typename TValue>
inline ::StringW Unity::Properties::Property_2<TContainer,TValue>::get_Name()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TContainer,typename TValue>
inline ::System::Type* Unity::Properties::Property_2<TContainer,TValue>::DeclaredValueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        "DeclaredValueType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template<typename TContainer,typename TValue>
inline void Unity::Properties::Property_2<TContainer,TValue>::AddAttribute(::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        "AddAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
template<typename TContainer,typename TValue>
inline void Unity::Properties::Property_2<TContainer,TValue>::AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        "AddAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
template<typename TContainer,typename TValue>
inline void Unity::Properties::Property_2<TContainer,TValue>::Unity_Properties_Internal_IAttributes_AddAttribute(::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        "Unity.Properties.Internal.IAttributes.AddAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
template<typename TContainer,typename TValue>
inline void Unity::Properties::Property_2<TContainer,TValue>::Unity_Properties_Internal_IAttributes_AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        "Unity.Properties.Internal.IAttributes.AddAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
template<typename TContainer,typename TValue>
template<typename TAttribute>
inline bool Unity::Properties::Property_2<TContainer,TValue>::HasAttribute()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                    "HasAttribute",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename TContainer,typename TValue>
inline void Unity::Properties::Property_2<TContainer,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Property_2<TContainer,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TContainer,typename TValue>
inline ::Unity::Properties::Property_2<TContainer,TValue>* Unity::Properties::Property_2<TContainer,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::Property_2<TContainer,TValue>*>());
}
/// @brief Convert operator to "::Unity::Properties::IProperty_1<TContainer>"
template<typename TContainer,typename TValue>
constexpr  Unity::Properties::Property_2<TContainer,TValue>::operator ::Unity::Properties::IProperty_1<TContainer>*() noexcept {
return static_cast<::Unity::Properties::IProperty_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IProperty_1<TContainer>"
template<typename TContainer,typename TValue>
constexpr ::Unity::Properties::IProperty_1<TContainer>* Unity::Properties::Property_2<TContainer,TValue>::i___Unity__Properties__IProperty_1_TContainer_() noexcept {
return static_cast<::Unity::Properties::IProperty_1<TContainer>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IProperty"
template<typename TContainer,typename TValue>
constexpr  Unity::Properties::Property_2<TContainer,TValue>::operator ::Unity::Properties::IProperty*() noexcept {
return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IProperty"
template<typename TContainer,typename TValue>
constexpr ::Unity::Properties::IProperty* Unity::Properties::Property_2<TContainer,TValue>::i___Unity__Properties__IProperty() noexcept {
return static_cast<::Unity::Properties::IProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::Internal::IAttributes"
template<typename TContainer,typename TValue>
constexpr  Unity::Properties::Property_2<TContainer,TValue>::operator ::Unity::Properties::Internal::IAttributes*() noexcept {
return static_cast<::Unity::Properties::Internal::IAttributes*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::Internal::IAttributes"
template<typename TContainer,typename TValue>
constexpr ::Unity::Properties::Internal::IAttributes* Unity::Properties::Property_2<TContainer,TValue>::i___Unity__Properties__Internal__IAttributes() noexcept {
return static_cast<::Unity::Properties::Internal::IAttributes*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TContainer,typename TValue>
constexpr ::Unity::Properties::Property_2<TContainer,TValue>::Property_2()   {
}
