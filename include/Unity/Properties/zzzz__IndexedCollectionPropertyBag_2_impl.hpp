#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__IConstructorWithCount_1_impl.hpp"
#include "Unity/Properties/zzzz__IConstructor_impl.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_def.hpp"
template<typename TList,typename TElement>
constexpr int32_t& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::__cordl_internal_get_m_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Index;
}
template<typename TList,typename TElement>
constexpr int32_t const& Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::__cordl_internal_get_m_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Index;
}
template<typename TList,typename TElement>
constexpr void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::__cordl_internal_set_m_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Index = value;
}
template<typename TList,typename TElement>
inline int32_t Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::get_Index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*>::get(),
                        "get_Index",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename TList,typename TElement>
inline ::StringW Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::get_Name()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TList,typename TElement>
inline void Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TList,typename TElement>
inline ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>* Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*>());
}
// Ctor Parameters []
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>::IndexedCollectionPropertyBag_2_ListElementProperty()   {
}
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*& Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::__cordl_internal_get_m_Property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>* const& Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::__cordl_internal_get_m_Property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Property;
}
template<typename TList,typename TElement>
constexpr void Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::__cordl_internal_set_m_Property(::Unity::Properties::IndexedCollectionPropertyBag_2_ListElementProperty<TList,TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_Property, value);
}
template<typename TList,typename TElement>
inline TList Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::Unity_Properties_IConstructorWithCount_TList__InstantiateWithCount(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>*>::get(),
                        "Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TList, false>(this, ___internal_method, count);
}
template<typename TList,typename TElement>
inline TList Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::InstantiateWithCount(int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<TList, false>(this, ___internal_method, count);
}
template<typename TList,typename TElement>
inline void Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TList,typename TElement>
inline ::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>* Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
template<typename TList,typename TElement>
constexpr  Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept {
return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag_1<TList>"
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IPropertyBag_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::i___Unity__Properties__IPropertyBag_1_TList_() noexcept {
return static_cast<::Unity::Properties::IPropertyBag_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template<typename TList,typename TElement>
constexpr  Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::operator ::Unity::Properties::IPropertyBag*() noexcept {
return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::i___Unity__Properties__IPropertyBag() noexcept {
return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructorWithCount_1<TList>"
template<typename TList,typename TElement>
constexpr  Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::operator ::Unity::Properties::IConstructorWithCount_1<TList>*() noexcept {
return static_cast<::Unity::Properties::IConstructorWithCount_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructorWithCount_1<TList>"
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IConstructorWithCount_1<TList>* Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::i___Unity__Properties__IConstructorWithCount_1_TList_() noexcept {
return static_cast<::Unity::Properties::IConstructorWithCount_1<TList>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IConstructor"
template<typename TList,typename TElement>
constexpr  Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::operator ::Unity::Properties::IConstructor*() noexcept {
return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IConstructor"
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IConstructor* Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::i___Unity__Properties__IConstructor() noexcept {
return static_cast<::Unity::Properties::IConstructor*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TList,typename TElement>
constexpr ::Unity::Properties::IndexedCollectionPropertyBag_2<TList,TElement>::IndexedCollectionPropertyBag_2()   {
}
