#pragma once
// IWYU pragma private; include "System/ComponentModel/IBindingList.hpp"
#include "System/Collections/zzzz__ICollection_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IList_impl.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::ComponentModel::IBindingList::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::ComponentModel::IBindingList::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::IBindingList::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::ComponentModel::IBindingList::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::IBindingList::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::ComponentModel::IBindingList::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
