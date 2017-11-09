/*
   Copyright 2012-2015 Alex Zhondin <qtinuum.team@gmail.com>
   Copyright 2015-2016 Alexandra Cherdantseva <neluhus.vagus@gmail.com>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef PROPERTY_DELEGATE_UINT_H
#define PROPERTY_DELEGATE_UINT_H

#include "QtnProperty/Delegates/PropertyDelegate.h"

class QtnPropertyUIntBase;

class QTN_IMPORT_EXPORT QtnPropertyDelegateUInt
	: public QtnPropertyDelegateTyped<QtnPropertyUIntBase>
{
	Q_DISABLE_COPY(QtnPropertyDelegateUInt)

	QString suffix;

public:
	QtnPropertyDelegateUInt(QtnPropertyUIntBase &owner);

	static bool Register();

protected:
	virtual QWidget *createValueEditorImpl(QWidget *parent, const QRect &rect,
		QtnInplaceInfo *inplaceInfo = nullptr) override;

	virtual bool acceptKeyPressedForInplaceEditImpl(
		QKeyEvent *keyEvent) const override;

	virtual void applyAttributesImpl(
		const QtnPropertyDelegateAttributes &attributes) override;

	virtual bool propertyValueToStr(QString &strValue) const override;
};

#endif // PROPERTY_DELEGATE_UINT_H
